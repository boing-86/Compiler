%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "ast.h"
	int yylex(void);
	int yyerror(char* s);
	STACK *stack;
	int checkloop = 0;
%}
%union{
	int iVal;
	float rVal;
	char* sVal;
}
%token<iVal> TINTEGER
%token<rVal> TREAL
%token<sVal> TSTRING TIDENTIFIER
%token TBREAK TCASE TDEFAULT TDO TELSE TFOR TIF TRETURN TSWITCH TWHILE 
%token TCHAR TFLOAT TINT TVOID
%token EQUAL INC DEC GE LE NE PE ME MTE DE MODE AND OR
%token TERROR TCOMMENT
%start Program

%%

Program : DecList		{
	ASTNode* n = makeASTNode(_PROG); 
						ASTNode* n1 = pop(stack); 
						push(stack, setChild(n, n1));}

DecList : DecList Dec	{ASTNode* dec = pop(stack); 
						ASTNode* declist = pop(stack);
						push(stack, setLastSibling(declist, dec));
						}
		| Dec			{}
		;

Dec : VarDec			{}
	| FuncDec			{}
	;

FuncDec : VarType TIDENTIFIER '(' Params ')' CpndStmt		{ASTNode* funcdec = makeASTNode(_FUNCDEC); 
															ASTNode* cpndstmt = pop(stack);
															ASTNode* params = pop(stack);
															ASTNode* id = makeASTNodeID($2);
															ASTNode* type = pop(stack);
															push(stack, setChild(funcdec, (setSibling(type, setSibling(id, (setSibling(params, cpndstmt)))))));}
        | VarType TIDENTIFIER '(' Params ')' ';'			{ASTNode* funcdec = makeASTNode(_FUNCDEC);
															ASTNode* params = pop(stack);
															ASTNode* id = makeASTNodeID($2);
															ASTNode* type = pop(stack);
															push(stack, setChild(funcdec, (setSibling(type, setSibling(id, params)))));}
		| TVOID TIDENTIFIER '(' Params ')' CpndStmt			{ASTNode* funcdec = makeASTNode(_FUNCDEC); 
															ASTNode* cpndstmt = pop(stack);
															ASTNode* params = pop(stack);
															ASTNode* id = makeASTNodeID($2);
															ASTNode* type = makeASTNodeTYPE(TYPE_VOID);
															push(stack, setChild(funcdec, (setSibling(type, setSibling(id, (setSibling(params, cpndstmt)))))));}
		| TVOID TIDENTIFIER '(' Params ')' ';'				{ASTNode* funcdec = makeASTNode(_FUNCDEC);
															ASTNode* params = pop(stack);
															ASTNode* id = makeASTNodeID($2);
															ASTNode* type = makeASTNodeTYPE(TYPE_VOID);
															push(stack, setChild(funcdec, (setSibling(type, setSibling(id, params)))));}
		;

Params : ParamList		{ASTNode* params = makeASTNode(_PARAMS);
						ASTNode* paramlist = pop(stack);
						push(stack, setChild(params, paramlist));}
       | TVOID			{ASTNode* params = makeASTNode(_PARAMS);
	   					push(stack, params);}
	   | 				{ASTNode* params = makeASTNode(_PARAMS);
	   					push(stack, params);}
	   ;

ParamList : ParamList ',' Param		{ASTNode* param = pop(stack);
									ASTNode* paramlist = pop(stack);
									push(stack, setLastSibling(paramlist, param));}
			| Param					{}
			;

Param : VarType Value				{ASTNode* param = makeASTNode(_PARAM);
									ASTNode* value = pop(stack);
									ASTNode* type = pop(stack);
									push(stack, setChild(param, setSibling(type, value)));}

CpndStmt : '{' LDecList StmtList '}'	{ASTNode* cpndstmt = makeASTNode(_CPNDSTMT);
										ASTNode* stmtlist = pop(stack);
										ASTNode* ldeclist = pop(stack);
										push(stack, setChild(cpndstmt, setSibling(ldeclist, stmtlist)));}

LDecList : LDecList VarDec	{
	ASTNode* vardec = pop(stack);
	ASTNode* ldeclist = pop(stack);
	if(getChild(ldeclist)){setLastSibling(getChild(ldeclist), vardec);
	push(stack, ldeclist);}
	else{
		push(stack, setChild(ldeclist, vardec));
	}
}
		| 					{push(stack, makeASTNode(_LDECLIST));}
		;

VarDec : VarType IDs ';'	{ASTNode* vardec = makeASTNode(_VARDEC);
							ASTNode* ids = pop(stack);
							ASTNode* type = pop(stack);
							push(stack, setChild(vardec, setSibling(type, ids)));}

VarType : TINT			{push(stack, makeASTNodeTYPE(TYPE_INT));}
		| TFLOAT		{push(stack, makeASTNodeTYPE(TYPE_FLOAT));}
		;

IDs : IDs ',' Value		{ASTNode* value = pop(stack);
						ASTNode* ids = pop(stack);
						push(stack, setLastSibling(ids, value));}
	| Value				{}

Value : TIDENTIFIER '[' TINTEGER ']'	{ASTNode* array = makeASTNode(_ARRAY);
										ASTNode* id = makeASTNodeID($1);
										ASTNode* integer = makeASTNodeINT($3);
										push(stack, setChild(array, setSibling(id, integer)));}
	| TIDENTIFIER						{push(stack, makeASTNodeID($1));}
	;

StmtList : StmtList Stmt				
{
	ASTNode* stmt = pop(stack);
	ASTNode* stmtlist = pop(stack);
	if(getChild(stmtlist)){
		setLastSibling(getChild(stmtlist), stmt);
		push(stack, stmtlist);}
	else{
		push(stack, setChild(stmtlist, stmt));
	}
	}
		| 								{push(stack, makeASTNode(_STMTLIST));}
		;

Stmt : MatchedStmt						{printf("#### %d ", checkloop);}
	| OpenStmt							{}
	;

MatchedStmt : ExprStmt							{}
			| ForMatchedStmt					{printf(" for #####\n");}
			| WhileMatchedStmt					{printf(" while #####\n");}
			| DoWhileStmt						{printf(" dowhile #####\n");}
			| ReturnStmt						{}
            | CpndStmt							{}
            | BreakStmt							{}
            | SwitchStmt						{printf(" switch #####\n");}
			| TIF '(' Expr ')' MatchedStmt TELSE MatchedStmt 		{
				ASTNode* ifstmt = makeASTNode(_IFSTMT);
				ASTNode* stmt2 = pop(stack);
				ASTNode* stmt1 = pop(stack);
				ASTNode* expr = pop(stack);
				push(stack, setChild(ifstmt, setSibling(expr, setSibling(stmt1, stmt2))));
				}
			;

OpenStmt : ForOpenStmt									{}
		| WhileOpenStmt									{}
		| TIF '(' Expr ')' Stmt							{
			ASTNode* ifstmt = makeASTNode(_IFSTMT);
			ASTNode* stmt = pop(stack);
			ASTNode* expr = pop(stack);
			push(stack, setChild(ifstmt, setSibling(expr, stmt)));}
		| TIF '(' Expr ')' MatchedStmt TELSE OpenStmt	{
			ASTNode* ifstmt = makeASTNode(_IFSTMT);
			ASTNode* stmt2 = pop(stack);
			ASTNode* stmt1 = pop(stack);
			ASTNode* expr = pop(stack);
			push(stack, setChild(ifstmt, setSibling(expr, setSibling(stmt1, stmt2))));
		}
		;

SwitchStmt : TSWITCH '(' Expr ')' '{' CaseList DefaultCase'}'	{
	checkloop = 0;
	ASTNode* swtichstmt = makeASTNode(_SWSTMT);
	ASTNode* defaultcase = pop(stack);
	ASTNode* caselist = pop(stack);
	ASTNode* expr = pop(stack);
	push(stack, setChild(swtichstmt, setSibling(expr, setLastSibling (caselist, defaultcase))));
	}

CaseList : CaseList TCASE TINTEGER ':' StmtList	{
			checkloop = 1;
			ASTNode* stmtlist = pop(stack);
			ASTNode* integer = makeASTNodeINT($3);
			ASTNode* case_ = makeASTNode(_CASE);
			ASTNode* caselist = pop(stack);

			if(getSibling(caselist)){
				setLastSibling(getSibling(caselist), setChild(case_, setSibling(integer, stmtlist)));
				push(stack, caselist);
			} else {
				push(stack, setSibling(caselist, setChild(case_, setSibling(integer, stmtlist))));
			}
		}

		| TCASE TINTEGER ':' StmtList			{
			checkloop = 1;
			ASTNode* stmtlist = pop(stack);
			ASTNode* case_ = makeASTNode(_CASE);
			ASTNode* integer = makeASTNodeINT($2);
			push(stack, setChild(case_, setSibling(integer, stmtlist)));
		}
		;

DefaultCase : TDEFAULT ':' StmtList	{
			ASTNode* stmtlist = pop(stack);
			ASTNode* default_ = makeASTNode(_DEFAULT);
			push(stack, setChild(default_, stmtlist));
}
			| 						{push(stack, makeASTNode(_DEFAULT));}
			;

ReturnStmt : TRETURN Expr ';'	{
	ASTNode* _return = makeASTNode(_RTSTMT);
	ASTNode* expr = pop(stack);
	push(stack, setChild(_return, expr));
	}
			| TRETURN ';'		{push(stack, makeASTNode(_RTSTMT));}
			;

BreakStmt : TBREAK ';'	{
	if(checkloop == 1){
		push(stack, makeASTNode(_BRKSTMT));
		checkloop = 0;
	}
	else{
		yyerror("break must in loop or switch");
	}
}

ExprStmt : Expr ';'	{
			ASTNode* expr = pop(stack);
			ASTNode* exprstmt = makeASTNode(_EXPRSTMT);
			push(stack, setChild(exprstmt, expr));}
		| ';'		{push(stack, makeASTNode(_EXPRSTMT));}
		;

Expr : AssignExpr	{}
	| SimpleExpr	{}

AssignExpr : Variable '=' Expr		{ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(16);
									push(stack, setChild(op, setSibling(var, expr)));}
			| Variable PE Expr	{ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(17);
									push(stack, setChild(op, setSibling(var, expr)));}
			| Variable ME Expr	{ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(18);
									push(stack, setChild(op, setSibling(var, expr)));}
			| Variable MTE Expr	{ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(19);
									push(stack, setChild(op, setSibling(var, expr)));}
			| Variable DE Expr	{ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(20);
									push(stack, setChild(op, setSibling(var, expr)));}
			| Variable MODE Expr	{ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(21);
									push(stack, setChild(op, setSibling(var, expr)));}
			;

Variable : TIDENTIFIER '[' Expr ']'	{
	ASTNode* expr = pop(stack);
	ASTNode* arr = makeASTNode(_ARRAY);
	ASTNode* id = makeASTNodeID($1);
	push(stack, setChild(arr, setSibling(id, expr)));
}
		| TIDENTIFIER					{push(stack, makeASTNodeID($1));}
		;

SimpleExpr : SimpleExpr OR AndExpr	{
	ASTNode* andexpr = pop(stack);
	ASTNode* simpleexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(15);
	push(stack, setChild(op, setSibling(simpleexpr, andexpr)));
}
			| AndExpr					{}
			;

AndExpr : AndExpr AND RelExpr			{
	ASTNode* relexpr = pop(stack);
	ASTNode* andexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(14);
	push(stack, setChild(op, setSibling(andexpr, relexpr)));
}
		| RelExpr						{}
		;

RelExpr : RelExpr '<' AddExpr	{
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(11);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
}
		| RelExpr LE AddExpr	{
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(13);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
		| RelExpr '>' AddExpr	{
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(10);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
		| RelExpr GE AddExpr	{
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(12);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
		| RelExpr EQUAL AddExpr	{
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(8);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
		| RelExpr NE AddExpr	{
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(9);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
		| AddExpr				{}
		;

AddExpr : AddExpr '+' Term		{
	ASTNode* term = pop(stack);
	ASTNode* addexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(1);
	push(stack, setChild(op, setSibling(addexpr, term)));
}
		| AddExpr '-' Term		{
	ASTNode* term = pop(stack);
	ASTNode* addexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(2);
	push(stack, setChild(op, setSibling(addexpr, term)));
		}
		| Term					{}
		;

Term : Term '*' Factor	{
	ASTNode* factor = pop(stack);
	ASTNode* term = pop(stack);
	ASTNode* op = makeASTNodeOP(3);
	push(stack, setChild(op, setSibling(term, factor)));
}
	| Term '/' Factor	{
		ASTNode* factor = pop(stack);
	ASTNode* term = pop(stack);
	ASTNode* op = makeASTNodeOP(4);
	push(stack, setChild(op, setSibling(term, factor)));
	}
	| Term '%' Factor	{
		ASTNode* factor = pop(stack);
	ASTNode* term = pop(stack);
	ASTNode* op = makeASTNodeOP(5);
	push(stack, setChild(op, setSibling(term, factor)));
	}
	| Factor			{}
	;

Factor : '(' Expr ')'		{}
		| FuncCall			{}
		| '-' Factor		{
			ASTNode* factor = pop(stack);
			ASTNode* op = makeASTNodeOP(2);
			push(stack, setChild(op, factor));
		}
		| Variable			{}
		| Variable IncDec	{
			ASTNode* incdec = pop(stack);
			ASTNode* variable = pop(stack);
			ASTNode* incdecexpr = makeASTNode(_INCDECEXP);
			push(stack, setChild(incdecexpr, (setSibling(variable, incdec))));
		}
		| IncDec Variable	{
			ASTNode* variable = pop(stack);
			ASTNode* incdec = pop(stack);
			ASTNode* incdecexpr = makeASTNode(_INCDECEXP);
			push(stack, setChild(incdecexpr, (setSibling(incdec, variable))));
		}
		| NumberLiteral		{}
		;

NumberLiteral : TINTEGER	{push(stack, makeASTNodeINT($1));}
			| TREAL			{push(stack, makeASTNodeREAL($1));}
			;

IncDec : INC	{push(stack, makeASTNodeOP(INC_));}
		| DEC	{push(stack, makeASTNodeOP(DEC_));}
		;

WhileMatchedStmt : TWHILE '(' Expr ')' MatchedStmt	{
	ASTNode* stmt = pop(stack);
	ASTNode* expr = pop(stack);
	ASTNode* whilestmt = makeASTNode(_WHLSTMT);
	push(stack, setChild(whilestmt, setSibling(expr, stmt)));
	}

WhileOpenStmt : TWHILE '(' Expr ')' OpenStmt		{
	ASTNode* stmt = pop(stack);
	ASTNode* expr = pop(stack);
	ASTNode* whilestmt = makeASTNode(_WHLSTMT);
	push(stack, setChild(whilestmt, setSibling(expr, stmt)));
}

DoWhileStmt : TDO Stmt TWHILE '(' Expr ')'';'		{
	ASTNode* expr = pop(stack);
	ASTNode* stmt = pop(stack);
	ASTNode* dowhilestmt = makeASTNode(_DOWHLSTMT);
	push(stack, setChild(dowhilestmt, setSibling(stmt, expr)));
	}

ForMatchedStmt : TFOR '(' Expr ';' Expr ';' Expr ')' MatchedStmt	{
	ASTNode* forstmt = makeASTNode(_FORSTMT);
	ASTNode* stmt = pop(stack);
	ASTNode* expr3 = pop(stack);
	ASTNode* expr2 = pop(stack);
	ASTNode* expr1 = pop(stack);
	ASTNode* childnodes = setSibling(expr1, setSibling(expr2, setSibling(expr3, stmt)));
	push(stack, setChild(forstmt, childnodes));
	}

ForOpenStmt : TFOR '(' Expr ';' Expr ';' Expr ')' OpenStmt		{
	ASTNode* forstmt = makeASTNode(_FORSTMT);
	ASTNode* stmt = pop(stack);
	ASTNode* expr3 = pop(stack);
	ASTNode* expr2 = pop(stack);
	ASTNode* expr1 = pop(stack);
	ASTNode* childnodes = setSibling(expr1, setSibling(expr2, setSibling(expr3, stmt)));
	push(stack, setChild(forstmt, childnodes));
}

FuncCall : TIDENTIFIER '(' Arguments ')'		{
	ASTNode* funccall = makeASTNode(_FUNCCALL);
	ASTNode* args = pop(stack);
	ASTNode* id = makeASTNodeID($1);
	push(stack, setChild(funccall, setSibling(id, args)));
}

Arguments : ArgumentList	{
	ASTNode* args = makeASTNode(_ARGS);
	ASTNode* arglist = pop(stack);
	push(stack, setChild(args, arglist));
}
			| 				{push(stack, makeASTNode(_ARGS));}
			;

ArgumentList : ArgumentList ',' Expr	{
	ASTNode* expr = pop(stack);
	ASTNode* arglist = pop(stack);
	push(stack, setLastSibling(arglist, expr));
}
			| Expr						{}
			;




%%
int main(int argc, char* argv[]){

	extern FILE *yyin;
	stack = initStack();
	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	printAST(pop(stack));
	delStack(stack);
	return 0;
}

int yyerror(char *s){
	printf("Parse error : %s\n", s);
	return 0;
}

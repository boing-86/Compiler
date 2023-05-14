%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "ast.h"
	int yylex(void);
	int yyerror(char* s);
	STACK *stack;
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

Program : DecList		{ASTNode* n = makeASTNode(_PROG); 
						ASTNode* n1 = pop(stack); 
						push(stack, setChild(n, n1));}

DecList : DecList Dec	{ASTNode* dec = pop(stack); 
						ASTNode* declist = pop(stack); 
						push(stack, setLastSibling(declist, dec));}
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

LDecList : LDecList VarDec	{ASTNode* vardec = pop(stack);
							ASTNode* ldeclist = pop(stack);
							if(getChild(ldeclist)){push(stack, setLastSibling(getChild(ldeclist), vardec));}
							else {push(stack, setChild(ldeclist, vardec));}}
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

Value : TIDENTIFIER '[' TINTEGER ']'	{printf("Value -> %s [ %d ]\n", $1, $3);
										ASTNode* array = makeASTNode(_ARRAY);
										ASTNode* id = makeASTNodeID($1);
										ASTNode* integer = makeASTNodeINT($3);
										push(stack, setChild(array, setSibling(id, integer)));}
	| TIDENTIFIER						{push(stack, makeASTNodeID($1));}
	;

StmtList : StmtList Stmt				{ASTNode* stmt = pop(stack);
										ASTNode* stmtlist = pop(stack);
										if(getChild(stmtlist)){push(stack, setLastSibling(getChild(stmtlist), stmt));}
										else {push(stack, setChild(stmtlist, stmt));}}
		| 								{push(stack, makeASTNode(_STMTLIST));}
		;

Stmt : MatchedStmt						{}
	| OpenStmt							{}
	;

MatchedStmt : ExprStmt							{}
			| ForMatchedStmt					{}
			| WhileMatchedStmt					{}
			| DoWhileStmt						{}
			| ReturnStmt						{}
            | CpndStmt							{}
            | BreakStmt							{}
            | SwitchStmt						{}
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
	printf("SwitchStmt -> switch ( Expr ) { CaseList DefaultCase }\n");}

CaseList : CaseList TCASE TINTEGER ':' StmtList	{printf("CaseList -> CaseList case %d : StmtList\n", $3);}
		| TCASE TINTEGER ':' StmtList			{printf("CaseList -> case %d : StmtList\n", $2);}
		;

DefaultCase : TDEFAULT ':' StmtList	{printf("DefaultCase -> default : StmtList\n");}
			| 						{}
			;

ReturnStmt : TRETURN Expr ';'	{printf("ReturnStmt -> return Expr ;\n");}
			| TRETURN ';'		{printf("ReturnStmt -> return ;\n");}
			;

BreakStmt : TBREAK ';'	{printf("BreakStmt -> break ;\n");}

ExprStmt : Expr ';'	{}
		| ';'		{}
		;

Expr : AssignExpr	{}
	| SimpleExpr	{}

AssignExpr : Variable '=' Expr		{printf("AssignExpr -> Variable = Expr\n");}
			| Variable PE Expr	{printf("AssignExpr -> Variable += Expr\n");}
			| Variable ME Expr	{printf("AssignExpr -> Variable -= Expr\n");}
			| Variable MTE Expr	{printf("AssignExpr -> Variable *= Expr\n");}
			| Variable DE Expr	{printf("AssignExpr -> Variable /= Expr\n");}
			| Variable MODE Expr	{printf("AssignExpr -> Variable %%= Expr\n");}
			;

Variable : TIDENTIFIER '[' Expr ']'	{printf("Variable -> %s [ Expr ]\n", $1);}
		| TIDENTIFIER					{printf("Variable -> %s\n", $1);}
		;

SimpleExpr : SimpleExpr OR AndExpr	{printf("SimpleExpr -> SimpleExpr || AndExpr\n");}
			| AndExpr					{}
			;

AndExpr : AndExpr AND RelExpr			{printf("AndExpr -> AndExpr && RelExpr\n");}
		| RelExpr						{}
		;

RelExpr : RelExpr '<' AddExpr	{printf("RelExpr -> RelExpr < AddExpr\n");}
		| RelExpr LE AddExpr	{printf("RelExpr -> RelExpr <= AddExpr\n");}
		| RelExpr '>' AddExpr	{printf("RelExpr -> RelExpr > AddExpr\n");}
		| RelExpr GE AddExpr	{printf("RelExpr -> RelExpr >= AddExpr\n");}
		| RelExpr EQUAL AddExpr	{printf("RelExpr -> RelExpr == AddExpr\n");}
		| RelExpr NE AddExpr	{printf("RelExpr -> RelExpr != AddExpr\n");}
		| AddExpr				{}
		;

AddExpr : AddExpr '+' Term		{printf("AddExpr -> AddExpr + Term\n");}
		| AddExpr '-' Term		{printf("AddExpr -> AddExpr - Term\n");}
		| Term					{}
		;

Term : Term '*' Factor	{printf("Term -> Term * Factor\n");}
	| Term '/' Factor	{printf("Term -> Term / Factor\n");}
	| Term '%' Factor	{printf("Term -> Term %% Factor\n");}
	| Factor			{}
	;

Factor : '(' Expr ')'		{}
		| FuncCall			{}
		| '-' Factor		{printf("Factor -> - Factor\n");}
		| Variable			{}
		| Variable IncDec	{printf("Factor -> Variable IncDec\n");}
		| IncDec Variable	{printf("Factor -> IncDec Variable\n");}
		| NumberLiteral		{}
		;

NumberLiteral : TINTEGER	{}
			| TREAL			{}
			;

IncDec : INC	{}
		| DEC	{}
		;

WhileMatchedStmt : TWHILE '(' Expr ')' MatchedStmt	{printf("WhileMatchedStmt -> while ( Expr ) MatchedStmt\n");}

WhileOpenStmt : TWHILE '(' Expr ')' OpenStmt		{printf("WhileOpenStmt -> while ( Expr ) OpenStmt\n");}

DoWhileStmt : TDO Stmt TWHILE '(' Expr ')'';'		{printf("DoWhileStmt -> do Stmt while ( Expr ) ;\n");}

ForMatchedStmt : TFOR '(' Expr ';' Expr ';' Expr ')' MatchedStmt	{printf("ForMatchedStmt -> for ( Expr ; Expr ; Expr ; ) MatchedStmt\n");}

ForOpenStmt : TFOR '(' Expr ';' Expr ';' Expr ')' OpenStmt		{printf("ForOpenStmt -> for ( Expr ; Expr ; Expr ) OpenStmt\n");}

FuncCall : TIDENTIFIER '(' Arguments ')'		{printf("FuncCall -> %s ( Arguments )\n", $1);}

Arguments : ArgumentList	{printf("Arguments -> ArgumentList\n");}
			| 				{}
			;

ArgumentList : ArgumentList ',' Expr	{printf("ArgumentList -> ArgumentList , Expr\n");}
			| Expr						{printf("ArgumentList -> Expr\n");}
			;




%%
int main(int argc, char* argv[]){
	extern FILE *yyin;
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

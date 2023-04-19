%{
	#include <stdio.h>
	#include <stdlib.h>
	int yylex(void);
	int yyerror(char* s);
%}
%union{
	int iVal;
	float rVal;
	char* idVal;
	char* sVal;
}
%token<iVal> TINTEGER
%token<rVal> TREAL
%token<idVal> TIDENTIFIER
%token<sVal> TSTRING
%token TBREAK TCASE TDEFAULT TDO TELSE TFOR TIF TRETURN TSWITCH TWHILE 
%token TCHAR TFLOAT TINT TVOID
%token EQUAL INC DEC GE LE NE PE ME MTE DE MODE AND OR 
%token TERROR TCOMMENT
%start Program

%%
Program : DecList		{printf("Program -> DecList\n");}

DecList : DecList Dec	{printf("DecList -> DecList Dec\n");}
		| Dec			{printf("DecList -> Dec\n");}
		;

Dec : VarDec			{printf("Dec -> VarDec\n");}
	| FuncDec			{printf("Dec -> FuncDec\n");}
	;

FuncDec : VarType TIDENTIFIER '(' Params ')' CpndStmt		{printf("FuncDec -> VarType %s ( Params ) CpndStmt\n", $2);}
        | VarType TIDENTIFIER '(' Params ')' ';'			{printf("FuncDec -> VarType %s ( Params );\n", $2);}
		| TVOID TIDENTIFIER '(' Params ')' CpndStmt			{printf("FuncDec -> void %s ( Params ) CpndStmt\n", $2);}
		| TVOID TIDENTIFIER '(' Params ')' ';'				{printf("FuncDec -> void %s ( Params )\n", $2);}
		;

Params : ParamList		{printf("Param -> ParamList\n");}
       | TVOID			{printf("Param -> void\n");}
	   | 				{printf("Param -> epsilon\n");}
	   ;

ParamList : ParamList ',' Param		{printf("ParamList -> ParamList , Param\n");}
			| Param					{printf("ParamList -> Param\n");}
			;

Param : VarType Value				{printf("Param -> VarType Value\n");}

CpndStmt : '{' LDecList StmtList '}'	{printf("{ LDecList StmtList }\n");}

LDecList : LDecList VarDec	{printf("LDecList -> LDecList VarDec\n");}
		| 					{printf("LDecList -> epsilon\n");}
		;

VarDec : VarType IDs ';'	{printf("VarDec -> VarType IDs ; \n");}

VarType : TINT			{printf("VarType -> int\n");}
		| TCHAR			{printf("VarType -> char\n");}
		| TFLOAT		{printf("VarType -> float\n");}
		;

IDs : IDs ',' Value		{printf("IDs -> IDs , Value\n");}
	| Value				{printf("IDs -> Value\n");}

Value : TIDENTIFIER '[' TINTEGER ']'	{printf("Value -> %s [ %d ] \n", $1, $3);}
	| TIDENTIFIER						{printf("Value -> %s\n", $1);}
	;

StmtList : StmtList Stmt				{printf("StmtList -> StmtList Stmt\n");}
		| 								{printf("StmtList -> epsilon\n");}
		;

Stmt : MatchedStmt						{printf("Stmt -> MatchedStmt\n");}
	| OpenStmt							{printf("Stmt -> OpenStmt\n");}
	;

MatchedStmt : ExprStmt							{printf("MatchedStmt -> ExprStmt\n");}
			| ForMatchedStmt					{printf("MatchedStmt -> ForMatchedStmt\n");}
			| WhileMatchedStmt					{printf("MatchedStmt -> WhileMatchedStmt\n");}
			| DoWhileStmt						{printf("MatchedStmt -> DoWhileStmt\n");}
			| ReturnStmt						{printf("MatchedStmt -> ReturnStmt\n");}
            | CpndStmt							{printf("MatchedStmt -> CpndStmt\n");}
            | BreakStmt							{printf("MatchedStmt -> BreakStmt\n");}
            | SwitchStmt						{printf("MatchedStmt -> SwitchStmt\n");}
			| TIF '(' Expr ')' MatchedStmt 		{printf("MatchedStmt -> if ( Expr ) MatchedStmt\n");}
			;

OpenStmt : ForOpenStmt									{printf("OpenStmt -> ForOpenStmt\n");}
		| WhileOpenStmt									{printf("OpenStmt -> WhileOpenStmt\n");}
		| TIF '(' Expr ')' Stmt							{printf("OpenStmt -> if ( Expr ) Stmt\n");}
		| TIF '(' Expr ')' MatchedStmt TELSE OpenStmt	{printf("if ( Expr ) MatchedStmt else OpenStmt\n");}
		;

SwitchStmt : TSWITCH '(' Expr ')' '{' CaseList DefaultCase'}'	{printf("SwitchStmt -> switch ( Expr ) { CaseList DefaultCase }\n");}

CaseList : CaseList TCASE TINTEGER ':' StmtList	{printf("CaseList -> CaseList case %d : StmtList\n", $3);}
		| TCASE TINTEGER ':' StmtList			{printf("CaseList -> case %d : StmtList\n", $2);}
		;

DefaultCase : TDEFAULT ':' StmtList	{printf("DefaultCase -> default : StmtList\n");}
			| 						{printf("DefaultCase -> epsilon\n");}
			;

ReturnStmt : TRETURN Expr ';'	{printf("ReturnStmt -> return Expr ; \n");}
			| TRETURN ';'		{printf("ReturnStmt -> return ; \n");}
			;

BreakStmt : TBREAK ';'	{printf("BreakStmt -> break ; \n");}

ExprStmt : Expr ';'	{printf("ExprStmt -> Expr ; \n");}
		| ';'		{printf("ExprStmt -> ; \n");}
		;

Expr : AssignExpr	{printf("Expr -> AssignExpr\n");}
	| SimpleExpr	{printf("Expr -> SimpleExpr\n");}

AssignExpr : Variable '=' Expr		{printf("AssignExpr -> Variable = Expr\n");}
			| Variable PE Expr	{printf("AssignExpr -> Variable += Expr\n");}
			| Variable ME Expr	{printf("AssignExpr -> Variable -= Expr\n");}
			| Variable MTE Expr	{printf("AssignExpr -> Variable *= Expr\n");}
			| Variable DE Expr	{printf("AssignExpr -> Variable /= Expr\n");}
			| Variable MODE Expr	{printf("AssignExpr -> Variable %%= Expr\n");}
			;

Variable : TIDENTIFIER '[' Expr ']'	{printf("Variable -> %s [ Expr ]\n", $1);}
		| AndExpr					{printf("Variable -> AndExpr\n");}
		;

SimpleExpr : SimpleExpr OR AndExpr	{printf("SimpleExpr -> SimpleExpr || AndExpr\n");}
			| RelExpr					{printf("SimpleExpr -> RelExpr\n");}
			;

AndExpr : AndExpr AND RelExpr			{printf("AndExpr -> AndExpr && RelExpr\n");}
		| RelExpr						{printf("AndExpr -> RelExpr\n");}
		;

RelExpr : RelExpr '<' AddExpr	{printf("RelExpr -> RelExpr < AddExpr\n");}
		| RelExpr LE AddExpr	{printf("RelExpr -> RelExpr <= AddExpr\n");}
		| RelExpr '>' AddExpr	{printf("RelExpr -> RelExpr > AddExpr\n");}
		| RelExpr GE AddExpr	{printf("RelExpr -> RelExpr >= AddExpr\n");}
		| RelExpr EQUAL AddExpr	{printf("RelExpr -> RelExpr == AddExpr\n");}
		| RelExpr NE AddExpr	{printf("RelExpr -> RelExpr != AddExpr\n");}
		| AddExpr				{printf("RelExpr -> AddExpr\n");}
		;

AddExpr : AddExpr '+' Term		{printf("AddExpr -> AddExpr + Term\n");}
		| AddExpr '-' Term		{printf("AddExpr -> AddExpr - Term\n");}
		| Term					{printf("AddExpr -> Term\n");}
		;

Term : Term '*' Factor	{printf("Term -> Term * Factor\n");}
	| Term '/' Factor	{printf("Term -> Term / Factor\n");}
	| Term '%' Factor	{printf("Term -> Term %% Factor\n");}
	| Factor			{printf("Term -> Factor\n");}
	;

Factor : '(' Expr ')'		{printf("Factor -> ( Expr )\n");}
		| FunCall			{printf("Factor -> FunCall\n");}
		| '-' Factor		{printf("Factor -> - Factor\n");}
		| Variable			{printf("Factor -> Variable\n");}
		| Variable IncDec	{printf("Factor -> Variable IncDec\n");}
		| IncDec Variable	{printf("Factor -> IncDec Variable\n");}
		| NumberLiteral		{printf("Factor -> NumberLiteral\n");}
		;

NumberLiteral : TINTEGER	{printf("NumberLiteral -> %d\n", $1);}
			| TREAL			{printf("NumberLiteral -> %.2f", $1);}
			;

IncDec : INC	{printf("IncDec -> ++ \n");}
		| DEC	{printf("IncDec -> -- \n");}
		;

WhileMatchedStmt : TWHILE '(' Expr ')' MatchedStmt	{printf("WhileMatchedStmt -> while ( Expr ) MatchedStmt\n");}

WhileOpenStmt : TWHILE '(' Expr ')' OpenStmt		{printf("WhileOpenStmt -> while ( Expr ) OpenStmt\n");}

DoWhileStmt : TDO Stmt TWHILE '(' Expr ')'';'		{printf("DoWhileStmt -> do Stmt while ( Expr ) ; \n");}

ForMatchedStmt : TFOR '(' Expr ';' Expr ';' Expr ')' MatchedStmt	{printf("ForMatchedStmt -> for ( Expr ; Expr ; Expr ; ) MatchedStmt\n");}

ForOpenStmt : TFOR '(' Expr ';' Expr ';' Expr ')' OpenStmt		{printf("ForOpenStmt -> for ( Expr ; Expr ; Expr ) OpenStmt\n");}

FunCall : TIDENTIFIER '(' Arguments ')'		{printf("FunCall -> %s ( Arguments )\n", $1);}

Arguments : ArgumentList	{printf("Arguments -> ArgumentList\n");}
			| 				{printf("Arguments -> epsilon\n");}
			;

ArgumentList : ArgumentList ',' Expr	{printf("ArgumentList -> ArgumentList , Expr\n");}
			| ArgumentList ',' TSTRING	{printf("ArgumentList -> ArgumentList , %s", $3);}
			| Expr						{printf("ArgumentList -> Expr\n");}
			| TSTRING					{printf("ArgumentList -> %s", $1);}
			;



%%
int main(int argc, char* argv[]){
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	return 0;
}

int yyerror(char *s){
	printf("Parse error : %s\n", s);
	return 0;
}

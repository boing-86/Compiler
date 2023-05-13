#ifndef _UTIL_H_
#define _UTIL_H_

// token 이름. node이름들, 네모이름! 
typedef enum {_PROG, _VARDEC, _FUNCDEC, _ID, _ARRAY, _TYPE, _PARAMS, _PARAM, _CPNDSTMT, _LDECLIST, _STMTLIST, _EXPRSTMT, _IFSTMT, _SWSTMT, _RTSTMT, _BRKSTMT, _WHLSTMT, _DOWHLSTMT, _FORSTMT, _CASE, _DEFAULT, _INCDECEXP, _OPER, _INTEGER, _REAL, _ARGS, _FUNCCALL} TKNUM;

typedef enum {NO_TYPE, TYPE_INT, TYPE_INT_ARRAY, TYPE_FLOAT, TYPE_FLOAT_ARRAY, TYPE_VOID, TYPE_ERROR} TYPE;

enum {ERROR_, PLUS_, MINUS_, MULT_, DIV_, MOD_, INC_, DEC_, EQ_, NE_, GT_, LT_, GE_, LE_, AND_, OR_, ASSIGN_, ADDASSIGN_, SUBASSIGN_, MULTASSIGN_, DIVASSIGN_, MODASSIGN_};

typedef struct astNodeType ASTNode; //네모의 타입
typedef struct stack_t STACK; //AST를 만들 때 필요한 stack

// node 만들기 함수
ASTNode* makeASTNode(TKNUM tknum); // 일반적인 ast 노드 만들기 param에 TKNUM 중에 하나 넣기
ASTNode* makeASTNodeTYPE(TYPE t); // type node 만들기. param에 TYPE 중 하나 쓰면 됨
ASTNode* makeASTNodeID(char *id); // id 만들기(함수이름/변수이름) param은 해당 이름
ASTNode* makeASTNodeOP(int op); // 연산자 노드 만들기. 연산자 번호 (enum <unnamed>::MINUS_ = 2) 쓰기
ASTNode* makeASTNodeINT(int n); // 정수값 노드 만들기. n = value
ASTNode* makeASTNodeREAL(float r); // 실수값 노드 만들기 r = value

ASTNode* getSibling(ASTNode* n);
ASTNode* getChild(ASTNode* n); //자식 노드 중에서 제일 왼쪽에 있는 거 리턴

ASTNode* setSibling(ASTNode* l, ASTNode* r); // l의 오른쪽에 r 붙이기. l을 리턴
ASTNode* setLastSibling(ASTNode* l, ASTNode* r); //r을 l의 맨 끝에 붙여줌. l을 리턴
ASTNode* setChild(ASTNode* p, ASTNode* c); //부모자식 연결, p를 리턴

TKNUM getTkNum(ASTNode *n); //숫자로 리턴됨
TYPE getType(ASTNode *n); // 타입노드가 아닌데 이거 쓰면 notype 혹은 typeerror 일수도?

void printAST(ASTNode* head); // 마지막으로 시행해야할 함수. 출력해줌

//stack 관련 함수
STACK* initStack(void);
void delStack(STACK* s); // 스택 다 쓰면 memory 해제해줘야함
void push(STACK* s, ASTNode* n); 
ASTNode* pop(STACK *s);
void printStack(STACK *s);

#endif


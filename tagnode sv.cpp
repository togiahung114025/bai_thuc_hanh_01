#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char name[30];
	int msv;
	float d1,d2,d3; 
}sv;
typedef struct tagNode{
	sv infor;
	struct tagNode *link;
}Node;
typedef struct{
	Node *pHead;Node *pTail;
	int n;
}LList; 
void initList(LList *L){
	L->pHead=NULL;
	L->pTail=NULL;
	L->n=0;
}
int main(){
	return 0;
}

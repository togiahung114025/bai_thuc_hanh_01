#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char name[30];
	int msv;
	float d1;
	float d2;
	float d3; 
}sv; 
int main(){
	int n;
	scanf("%d",&n);
	sv *a=(sv*)calloc(n,sizeof(sv));
	for (int i=0;i<n;i++){
		scanf("%29s %d %f %f %f",a[i].name,&a[i].msv,&a[i].d1,&a[i].d2,&a[i].d3);		
	}
	for (int i=0;i<n;i++){
		printf("%s %d %.2f %.2f %.2f\n",a[i].name,a[i].msv,a[i].d1,a[i].d2,a[i].d3);
	}
	free(a); 
	return 0;
}

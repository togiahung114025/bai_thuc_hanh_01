#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	float*pt=(float*)calloc(n,sizeof(float));
	for(int i=0;i<n;i++){
			scanf("%f",&pt[i]);
	}
	for(int i=0;i<n;i++){
			printf("%.2f ",pt[i]);
	}
	free(pt);
	return 0;
}

#include <stdio.h> 
#include <math.h>
int main(){
	int n; 
	printf("nhap n:"); 
	scanf("%d",&n); 
	if(n<2){
		printf("ko nto");
	} else{
		bool isprime=true;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				isprime=false;
			}
		}
		if(isprime){
			printf("co nto");
		}else{
			printf("ko nto");
		}
	}
	return 0;
} 

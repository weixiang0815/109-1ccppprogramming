#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	if(n==1){
		printf("1 is not prime");
		return 0;
	}
	else if(n>=2&&n<=3){
		printf("%d is prime",n);
		return 0;
	}
	else if(n>3){
		for(i=2;i<n;i++){
			if(n%i==0){
				printf("%d is not prime",n);
				return 0;
			}
		}
		printf("%d is prime",n);
	}
	return 0;
}

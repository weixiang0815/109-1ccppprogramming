#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j; //1 2 3 1 5 0
	for(i=1;i<=n;i+=2){
		for(j=1;j<=n-i;j+=2){
			printf(" "); 
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		puts("");
	}
	for(i=n-2;i>=1;i-=2){
		for(j=n-i;j>=1;j-=2){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("*");
		}
		puts("");
	}
	return 0;
}

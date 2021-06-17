#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
	scanf("%d",&N);
	int i,j,k,l;
	for(i=1;i<=N;i++){
		for(j=N-i;j>0;j--){
			printf(" ");
		}
		for(k=1;k<=i-1;k++){
			printf("* ");
		}
		printf("*\n");
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		printf("__");
		for(j=0;j<i-1;j++){
			printf("||");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		printf("||");
	}
	return 0;
}

#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		for(i=1;i<n-j;i++){
			printf(" ");
		}
		for(i=0;i<j+1;i++){
			printf("*");
		}
		for(i=1;i<j+1;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

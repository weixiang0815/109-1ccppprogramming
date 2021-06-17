#include<stdio.h>
#include<stdlib.h>
int main(){
	int n[5],i,j;
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++){
		printf("%d\t",n[i]);
		for(j=1;j<=n[i];j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

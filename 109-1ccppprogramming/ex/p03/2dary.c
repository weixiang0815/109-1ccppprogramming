#include<stdio.h>
#include<stdlib.h>
#define CLS 2
#define STU 3
#include<string.h>
int main(){
	int ary[CLS][STU];
	int i,j;
	for(i=0;i<CLS;i++){
		printf("Class %d\n",i+1);
		for(j=0;j<STU;j++){
			printf(" student %d:",j+1);
			scanf("%d",&ary[i][j]);
		}
	}
	for(i=0;i<CLS;i++){
		for(j=0;j<STU;j++){
			printf("%2d ",ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}

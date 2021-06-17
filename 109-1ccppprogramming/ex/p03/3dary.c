#include<stdio.h>
#include<stdlib.h>
#define CLS 2
#define STU 3
#define SUB 2
#include<string.h>
int main(){
	int ary[CLS][STU][SUB]={1,2,3,4,5,6,7,8,9,10,11,12};
	int i,j,k;
	for(i=0;i<CLS;i++){
		printf("class %d\n",i+1);
		for(j=0;j<STU;j++){
			printf(" stu %d:\n",j+1);
			for(k=0;k<SUB;k++){
				printf("  sub %d: ",k+1);
				printf("%d\n",ary[i][j][k]);
			}
		}
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define CLS 2
#define STU 3
#include<string.h>
int main(){
	int ary[CLS][STU];
	int i,j;
	int sum=0;
	double avg;
	for(i=0;i<CLS;i++){
		for(j=0;j<STU;j++){
			scanf("%d",&ary[i][j]);
		}
	}
	for(i=0;i<CLS;i++){
		printf("class %d\n",i+1);
		sum=0;
		for(j=0;j<STU;j++){
			printf(" %d: %d\n",j+1,ary[i][j]);
			sum+=ary[i][j];
		}
		printf(" sum: %d\n avg: %.2lf",sum,(double)sum/STU);
		printf("\n");
	}
	sum=0;
	for(i=0;i<CLS;i++){
		for(j=0;j<STU;j++){
			sum+=ary[i][j];
		}
	}
	printf("total: %d, avg: %.2lf",sum,(double)sum/(STU*CLS));
	return 0;
}

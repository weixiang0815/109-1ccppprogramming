#include<stdio.h>
#include<stdlib.h>
#define N 5
int main(){
	int A[N]={11,22,33,44,55};
	int *P;
	P=A;
	int i;
	for(i=0;i<N;i++){
		printf("A[%d]=>%d,%d\n",i,A[i],&A[i]);
	}
	
	puts(" ");
	
	for(i=0;i<N;i++){
		printf("P[%d]=>%d,%d\n",i,P[i],&P[i]);
	}
	
	puts(" ");
	
	for(i=0;i<N;i++){
		printf("*(P+%d)=>%d,%d\n",i,*(P+i),P+i);//&*(P+i)´N¬OP+i 
	}
	return 0;
}

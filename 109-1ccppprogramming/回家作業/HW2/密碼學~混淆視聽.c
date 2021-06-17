#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
	scanf("%d",&N);
	int *A;
	A=(int*)malloc(sizeof(int)*N);
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	int temp;
	for(i=0;i<N-1;i+=2){
		temp=A[i];
		A[i]=A[i+1];
		A[i+1]=temp;
	}
	for(i=0;i<N;i++){
		printf("%d ",A[i]);
	}
	puts("");
	return 0;
}

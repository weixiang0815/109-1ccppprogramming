#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
    int *A;
    scanf("%d",&N);
    A = (int *)malloc(sizeof(int)*N);
    int i;
    for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
    competition(A,N);
    for(i=0;i<N;i++){
		printf("%d ",A[i]);
	}
    printf("\n");
    free(A);
	return 0;
}

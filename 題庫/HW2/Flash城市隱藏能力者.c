#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,*A;
	scanf("%d",&N);
	A=(int*)malloc(sizeof(int)*N);
	int i,sum=0;
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
		sum+=A[i];
	}
	int avg=sum/N;
	int n=0;
	for(i=0;i<N;i++){
		if(A[i]>avg){
			n++;
		}
		else{
			continue;
		}
	}
	printf("%d\n",n);
	return 0;
}

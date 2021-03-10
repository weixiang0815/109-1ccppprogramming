#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,K;
	scanf("%d%d",&N,&K);
	int *p;
	p=(int*)malloc(sizeof(int)*N);
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&p[i]);
	}
	int mid=N/2;
	if(N%2==0){
		mid--;
	}
	if(K>p[mid]){
		printf("%d\nWINNER WINNER CHICKEN DINNER!\n",p[mid]);
	}
	else{
		printf("%d\nBETTER LUCK NEXT TIME!\n",p[mid]);
	}
	free(p);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
	scanf("%d",&N);
	int *n;
	n=(int*)malloc(sizeof(int)*N);
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&n[i]);
	}
	int max=n[0],maxpos=1,min=n[0],minpos=1;
	for(i=1;i<N;i++){
		if(n[i]>max){
			max=n[i];
			maxpos=i+1;
		}
		else if(n[i]==max){
			continue;
		}
	}
	for(i=1;i<N;i++){
		if(n[i]<min){
			min=n[i];
			minpos=i+1;
		}
		else if(n[i]==min){
			continue;
		}
	}
	printf("%d %d\n%d %d\n",maxpos,max,minpos,min);
	free(n);
	return 0;
}

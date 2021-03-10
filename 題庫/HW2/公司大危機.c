#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int N,*n;
	scanf("%d",&N);
	n=(int*)malloc(sizeof(int)*N);
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&n[i]);
	}
	int K,*k,key;
	scanf("%d",&K);
	k=(int*)malloc(sizeof(int)*K);
	int j;
	for(i=0;i<K;i++){
		scanf("%d",&key);
		if(key<1||key>N){
			continue;
		}
		k[i]=key;
		n[k[i]-1]*=0;
	}
	int sum=0;
	for(i=0;i<N;i++){
		sum+=n[i];
	}
	int max=n[0],maxpos=1;
	for(i=1;i<N;i++){
		if(n[i]>max){
			max=n[i];
			maxpos=i+1;
		}
		else if(n[i]==max){
			continue;
		}
	}
	printf("%d\n%d %d",sum,maxpos,max);
	free(n);
	free(k);
	return 0;
}

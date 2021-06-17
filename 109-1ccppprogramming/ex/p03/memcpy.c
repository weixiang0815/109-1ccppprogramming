#include<stdio.h>
#include<stdlib.h>
#define N 5
#include<string.h>
int main(){
	int ary1[N]={11,22,33,44,55};
	int ary2[N];
	memcpy(ary2,ary1,sizeof(int)*N);
	int i;
	for(i=0;i<N;i++){
		printf("%d ",ary1[i]);
	}
	printf("\n");
	for(i=0;i<N;i++){
		printf("%d ",ary2[i]);
	}
	return 0;
}

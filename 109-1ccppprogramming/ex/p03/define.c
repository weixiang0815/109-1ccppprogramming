#include<stdio.h>
#include<stdlib.h>
#define N 3
int main(){
	int n1=77;
	int ary1[N];
	int n2=88;
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&ary1[i]);
	}
	for(i=0;i<N+1;i++){
		printf("ary1[%d]=>%d\n",i,ary1[i]);
	}
	return 0;
}

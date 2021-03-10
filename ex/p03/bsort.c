#include<stdio.h>
#include<stdlib.h>
#define N 5
int main(){
	int ary[N]={34,12,5,66,1};
	int i,j;
	int tmp;
	for(j=0;j<N;j++){
		for(i=0;i<N-1;i++){
		if(ary[i]>ary[i+1]){
			tmp=ary[i];
			ary[i]=ary[i+1];
			ary[i+1]=tmp;
		}
	}
	}
	for(i=0;i<N;i++){
		printf("%d ",ary[i]);
	}
	return 0;
}

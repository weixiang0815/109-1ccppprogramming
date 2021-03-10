#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j;
	scanf("%d",&i);
	int *p;
	p=(int *)malloc(sizeof(int)*i);
	for(j=0;j<i;j++){
		scanf("%d",&p[j]);
	}
	for(j=i-1;j>=0;j--){
		printf("%d ",p[j]);
	}
	free(p);
	puts("");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define H 2
#define W 3
#include<string.h>
int main(){
	int ary[H][W];
	int i,j;
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			scanf("%d",&ary[i][j]);
		}
	}
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			printf("%2d ",ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}

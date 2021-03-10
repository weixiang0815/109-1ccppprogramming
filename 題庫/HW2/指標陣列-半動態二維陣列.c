#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p[3],i,j;
	for(i=0;i<3;i++){
		p[i]=(int *)malloc(sizeof(int)*(i+1));
	}
	for(i=0;i<3;i++){
		for(j=0;j<i+1;j++){
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<i+1;j++){
			printf("%d ",p[i][j]); 
		}
		puts("");
	}
	for(i=0;i<3;i++){
		free(p[i]);
	}
	return 0;
}

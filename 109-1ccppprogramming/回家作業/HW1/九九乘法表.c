#include<stdio.h>
#include<stdlib.h>
int main (){
	int n,m,j,i;
	scanf("%d%d",&n,&m);
	for(j=1;j<=n;j++){
		for(i=1;i<=m;i++){
			printf("%d*%d=%2d ",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define N 5
int main(){
	int arry[N]={11,22,33,44,55};
	char fn[100];
	scanf("%s",fn);
	FILE *f1=fopen(fn,"w");
	printf("%d\n",N);
	fprintf(f1,"%d\n",N);
	int i;
	for(i=0;i<N;i++){
		printf("%d ",arry[i]);
		fprintf(f1,"%d ",arry[i]);
	}
	fclose(f1);
	return 0;
}

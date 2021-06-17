#include<stdio.h>
#include<stdlib.h>
int main(){
	int arry[100],i,n;
	char fn[100];
	scanf("%s",fn);
	FILE *f1=fopen(fn,"r");
	fscanf(f1,"%d\n",&n);
	for(i=0;i<n;i++){
		fscanf(f1,"%d ",&arry[i]);
	}
	fclose(f1);
	for(i=0;i<n;i++){
		printf("%d ",arry[i]);
	}
	puts("");
	return 0;
}

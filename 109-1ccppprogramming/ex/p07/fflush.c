#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *f1=fopen("fflush.txt","w");
	int i;
	for(i=1;i<11;i++){
		printf("%d ",i);
		fprintf(f1,"%d ",i);
		fflush(f1);
	}
	fclose(f1);
	return 0;
}

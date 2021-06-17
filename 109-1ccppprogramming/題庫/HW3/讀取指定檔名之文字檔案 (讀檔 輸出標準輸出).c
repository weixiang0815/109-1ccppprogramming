#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char txt[10000];
	scanf("%s",txt);
	char c1;
	FILE *f1=fopen(txt,"r");
	while(1){
		fscanf(f1,"%c",&c1);
		if(feof(f1)){
			break;
		}
		printf("%c",c1);
	}
	fclose(f1);
	return 0;
}

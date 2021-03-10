#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char txt[10000];
	FILE *f1=fopen("f01.txt","r");
	while(1){
		fscanf(f1,"%s ",txt);
		puts(txt);
		if(feof(f1)){
			break;
		}
	}
	fclose(f1);
	return 0;
}

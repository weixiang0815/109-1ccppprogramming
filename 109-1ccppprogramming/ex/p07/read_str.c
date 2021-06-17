#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[10000];
	char c1;
	int i;
	FILE *f1=fopen("f01.txt","r");
	for(i=0;i<10000;i++){
		fscanf(f1,"%s ",str);
		puts(str);
		if(feof(f1)){
			break;
		}
	}
	fclose(f1);
	return 0;
}

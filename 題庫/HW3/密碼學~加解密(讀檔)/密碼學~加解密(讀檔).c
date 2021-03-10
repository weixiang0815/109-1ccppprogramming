#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
#define N 1000
int main(){
	char n[200]={'\0'},key[N]={'\0'},code[N]={'\0'};
	scanf("%s",n);
	int i=0,j;
	FILE *f=fopen(n,"r");
	fscanf(f,"%s\n",key);
	while(1){
		if(feof(f)){
			break;
		}
		fscanf(f,"%s\n",code);
		for(j=0;j<strlen(code);j++){
			if(key[j]==code[j]){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
		memset(code,'\0',strlen(code));
		i++;
	}
	fclose(f);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[10000];
	char c1;
	int i;
	FILE *f1=fopen("f01.txt","r");
	//fscanf(f1,"%s",str);
	for(i=0;i<10000;i++){
		fscanf(f1,"%c",&c1);
		if(feof(f1)){
			break;
		}
		printf("%c",c1);
	}
	fclose(f1);
	//puts(str);
	return 0;
}

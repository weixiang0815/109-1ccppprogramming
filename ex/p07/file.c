#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char txt[100];
	FILE *f1=fopen("f01.txt","r");
	fscanf(f1,"%s",txt);
	fclose(f1);
	puts(txt);
	f1=fopen("f01_write.txt","w");
	fprintf(f1,"txt = %s\n",txt);
	fprintf(f1,"%d",10);
	fclose(f1);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char s[200]={'\0'};
	scanf("%s",s);
	FILE *f=fopen(s,"r");
	char key[200]={'\0'};
	int i;
	while(1){
		if(feof(f)){
			break;
		}
		fscanf(f,"%[^\n]",key);
		for(i=0;i<strlen(key);i++){
			if(key[i]>='a'&&key[i]<='z'){
				key[i]-=32;
			}
		}
		printf("%s\n",key);
		memset(key,'\0',strlen(key));
		fscanf(f,"%*c");
	}
	fclose(f);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char str[30][200]={'\0'};
	int i;
	char key[200]={'\0'};
	int num=0,longest=0;
	while(1){
		scanf("%[^\n]",key);
		scanf("%*c");
		if(strcmp(key,"-1")==0){
			break;
		}
		strcpy(str[num],key);
		if(strlen(str[num])>strlen(str[longest])){
			longest=num;
		}
		num++;
		memset(key,'\0',strlen(key));
	}
	char token;
	scanf("%c",&token);
	for(i=0;i<strlen(str[longest])+2;i++){
		printf("%c",token);
	}
	printf("\n");
	for(i=0;i<num;i++){
		if(i==longest){
			printf("%c%s%c\n",token,str[i],token);
		}
		else{
			printf("%c%s",token,str[i]);
			int j;
			for(j=0;j<strlen(str[longest])-strlen(str[i]);j++){
				printf(" ");
			}
			printf("%c\n",token);
		}
	}
	for(i=0;i<strlen(str[longest])+2;i++){
		printf("%c",token);
	}
	printf("\n");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char s[200]={'\0'};
	scanf("%s",s);
	FILE *f=fopen(s,"r");
	char key[20]={'\0'};
	int pistol=0,smg=0,shotgun=0,ar=0,sniper=0;
	while(1){
		if(feof(f)){
			break;
		}
		fscanf(f,"%[^-]",key);
		if(strcmp(key,"PISTOL")==0){
			pistol++;
		}
		else if(strcmp(key,"SMG")==0){
			smg++;
		}
		else if(strcmp(key,"SHOTGUN")==0){
			shotgun++;
		}
		else if(strcmp(key,"AR")==0){
			ar++;
		}
		else if(strcmp(key,"SNIPER")==0){
			sniper++;
		}
		fscanf(f,"%*[^\n]");
		fscanf(f,"%*c");
		memset(key,'\0',strlen(key));
	}
	fclose(f);
	printf("%d %d %d %d %d",pistol,smg,shotgun,ar,sniper);
	return 0;
}

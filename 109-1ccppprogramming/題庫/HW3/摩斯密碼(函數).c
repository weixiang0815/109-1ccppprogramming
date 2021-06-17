#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
char* transform(char **list);
int main(){
	char list[20][10],key[200];
	memset(key,'\0',200);
	int i;
	for(i=0;i<20;i++){
		memset(list[i],'\0',10);
	}
	char ans[20][20];
	for(i=0;i<20;i++){
		memset(ans[i],'\0',20);
	}
	int l=0;
	char *p[20];
	p[0]=&list[0][0];
	for(i=1;i<20;i++){
		p[i]=list[i];
	}
	while(1){
		scanf("%[^\n]",key);
		scanf("%*c");
		if(strcmp(key,"-1")==0){
			break;
		}
		int j=0,k=0;
		for(i=0;i<strlen(key);i++){
			if(key[i]==' '){
				if(key[i+1]==' '){
					continue;
				}
				else{
					j*=0;
					k++;
				}
			}
			else{
				list[k][j]=key[i];
				j++;
			}
		}
		strcpy(ans[l],transform(p));
		l++;
		memset(key,'\0',strlen(key));
		for(i=0;i<20;i++){
			memset(list[i],'\0',strlen(list[i]));
		}
	}
	for(i=0;i<l;i++){
		printf("%s\n",ans[i]);
	}
	return 0;
}
char* transform(char **list){
	static char ans[20];
	memset(ans,'\0',20);
	int i,j=0,n=0;
	while(1){
		if(list[n][0]=='\0'){
			break;
		}
		else{
			n++;
		}
	}
	for(i=0;i<n;i++){
		if(strcmp(list[i],"-----")==0){
			ans[j]='0';
			j++;
		}
		else if(strcmp(list[i],".----")==0){
			ans[j]='1';
			j++;
		}
		else if(strcmp(list[i],"..---")==0){
			ans[j]='2';
			j++;
		}
		else if(strcmp(list[i],"...--")==0){
			ans[j]='3';
			j++;
		}
		else if(strcmp(list[i],"....-")==0){
			ans[j]='4';
			j++;
		}
		else if(strcmp(list[i],".....")==0){
			ans[j]='5';
			j++;
		}
		else if(strcmp(list[i],"-....")==0){
			ans[j]='6';
			j++;
		}
		else if(strcmp(list[i],"--...")==0){
			ans[j]='7';
			j++;
		}
		else if(strcmp(list[i],"---..")==0){
			ans[j]='8';
			j++;
		}
		else if(strcmp(list[i],"----.")==0){
			ans[j]='9';
			j++;
		}
		else{
			memset(ans,'\0',strlen(ans));
			strcpy(ans,"error");
			break;
		}
	}
	return ans;
}

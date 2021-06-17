#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char key[10],f[10];
	double sum=0;
	int i;
	while(1){
		gets(key);
		if(strcmp(key,"q")==0){
			break;
		}
		for(i=0;i<strlen(key);i++){
			if(key[i]=='.'){
				f[0]='0';
				int j=i,k=0;
				while(key[j]!='\0'){
					f[k]=key[j];
					k++;
					j++;
				}
				sum+=atof(f);
				memset(f,'\0',strlen(f));
				break;
			}
		}
		memset(key,'\0',strlen(key));
	}
	printf("%.2lf",sum);
	return 0;
}

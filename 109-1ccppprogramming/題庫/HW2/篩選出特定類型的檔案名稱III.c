#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char key[100],t[100][100],p[100][100];
	int i=0,j=0,k;
	while(1){
		scanf("%s",key);
		if(strcmp(key,"-1")==0){
			break;
		}
		int n=strlen(key);
		if(key[n-3]=='.'&&key[n-2]=='p'&&key[n-1]=='y'){
			char keyp[200]={"P00_"};
			for(k=0;k<n-3;k++){
				if(key[k]>='a'&&key[k]<='z'){
					key[k]-=32;
				}
			}
			strcat(keyp,key);
			strcpy(p[j],keyp);
			memset(keyp,'\0',strlen(keyp));
			j++;
		}
		else if(key[n-4]=='.'&&key[n-3]=='t'&&key[n-2]=='x'&&key[n-1]=='t'){
			char keyt[200]={"T00_"};
			if(key[0]>='a'&&key[0]<='z'){
				key[0]-=32;
			}
			strcat(keyt,key);
			strcpy(t[i],keyt);
			memset(keyt,'\0',strlen(keyt));
			i++;
		}
		memset(key,'\0',n);
	}
	printf("[");
	for(k=0;k<i;k++){
		if(k==i-1){
			printf("'%s'",t[k]);
		}
		else{
			printf("'%s', ",t[k]);
		}
	}
	printf("]\n[");
	for(k=0;k<j;k++){
		if(k==j-1){
			printf("'%s'",p[k]);
		}
		else{
			printf("'%s', ",p[k]);
		}
	}
	printf("]");
	return 0;
} 

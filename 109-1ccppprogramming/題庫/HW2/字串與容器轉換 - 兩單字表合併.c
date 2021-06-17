#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char a[100],b[100];
	scanf("%[^\n]",a);
	scanf("%*[\n]");
	scanf("%[^\n]",b);
	int i,n=0;
	for(i=0;i<strlen(a);i++){
		if(a[i]==';'){
			n++;
		}
	}
	int m=0;
	for(i=0;i<strlen(b);i++){
		if(b[i]==','){
			m++;
		}
	}
	char c[20][100];
	for(i=0;i<n+m+2;i++){
		memset(c[i],'\0',100);
	}
	char key[100];
	memset(key,'\0',100);
	int j=0,k=0;
	for(i=0;i<strlen(a);i++){
		if(a[i]==';'){
			strcpy(c[k],key);
			k++;
			j*=0;
			memset(key,'\0',strlen(key));
		}
		else{
			key[j]=a[i];
			j++;
		}
	}
	strcpy(c[k],key);
	k++;
	j*=0;
	memset(key,'\0',strlen(key));
	for(i=0;i<strlen(b);i++){
		if(b[i]==','){
			strcpy(c[k],key);
			k++;
			j*=0;
			memset(key,'\0',strlen(key));
		}
		else{
			key[j]=b[i];
			j++;
		}
	}
	strcpy(c[k],key);
	k*=0;
	j*=0;
	memset(key,'\0',strlen(key));
	for(i=0;i<n+m+2;i++){
		for(j=1;j<n+m+2;j++){
			if(strcmp(c[j],c[j-1])<0){
				strcpy(key,c[j]);
				memset(c[j],'\0',strlen(c[j]));
				strcpy(c[j],c[j-1]);
				memset(c[j-1],'\0',strlen(c[j-1]));
				strcpy(c[j-1],key);
				memset(key,'\0',strlen(key));
			}
		}
	}
	int flag=0;
	for(i=0;i<n+m+2;i++){
		if(i+1==n+m+1){
			if(strcmp(c[i],c[i+1])==0&&flag==0){
				printf("%s",c[i]);
				break;
			}
			else if(strcmp(c[i],c[i+1])!=0){
				if(flag==0){
					printf("%s %s",c[i],c[i+1]);
					break;
				}
				else{
					printf("%s",c[i+1]);
					break;
				}
			}
		}
		else{
			if(strcmp(c[i],c[i+1])==0&&flag==0){
				printf("%s ",c[i]);
				flag++;
			}
			else if(strcmp(c[i],c[i+1])!=0){
				if(flag==0){
					printf("%s ",c[i]);
				}
				else{
					flag*=0;
				}
			}
		}
	}
	return 0;
}

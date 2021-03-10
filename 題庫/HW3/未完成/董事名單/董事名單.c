#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char n1[200]={'\0'},key[200]={'\0'};
	char name[30][200]={'\0'};
	int j;
	scanf("%s",n1);
	FILE *f1=fopen(n1,"r");
	int invest[30]={0},i=0;
	while(1){
		if(feof(f1)){
			break;
		}
		fscanf(f1,"%s\r\n",name[i]);
		fscanf(f1,"%d\r\n",&invest[i]);
		i++;
	}
	fclose(f1);
	int k,temp;
	int flag1=0;
	for(j=0;j<i;j++){
		for(k=0;k<i-1;k++){
			if(invest[k]<invest[k+1]){
				temp=invest[k];
				invest[k]=invest[k+1];
				invest[k+1]=temp;
				strcpy(key,name[k]);
				memset(name[k],'\0',strlen(key));
				strcpy(name[k],name[k+1]);
				memset(name[k+1],'\0',strlen(key));
				strcpy(name[k+1],key);
				memset(key,'\0',strlen(key));
				flag1++;
			}
		}
		if(flag1==0){
			break;
		}
	}
	int l,n;
	for(k=0;k<i;k++){
		if(invest[k]==invest[k+1]){
			l=k;
			while(1){
				if(invest[l]!=invest[l+1]){
					break;
				}
				l++;
			}
			for(n=k;n<l-1;n++){
				if(strcmp(name[n],name[n+1])>0){
					strcpy(key,name[n]);
					memset(name[n],'\0',strlen(name[n]));
					strcpy(name[n],name[n+1]);
					memset(name[n+1],'\0',strlen(name[n+1]));
					strcpy(name[n+1],key);
					memset(key,'\0',strlen(key));
				}
			}
			k=l-1;
			}
	}
	for(j=0;j<i;j++){
		if(j==i-1){
			printf("%s %d",name[j],invest[j]);
		}
		else{
			printf("%s %d\n",name[j],invest[j]);
		}
	}
	return 0;
}

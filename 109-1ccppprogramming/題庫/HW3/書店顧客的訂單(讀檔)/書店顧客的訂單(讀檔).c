#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char c[500]="./",key[500]={'\0'};
	scanf("%s",key);
	strcat(c,key);
	memset(key,'\0',strlen(key));
	FILE *f=fopen(c,"r");
	char list[1000][500]={'\0'};
	int i;
	int num[1000]={0},n=0,m;
	fscanf(f,"%[^,],%d\n",key,&m);
	for(i=0;i<strlen(key);i++){
		if(key[i]>='A'&&key[i]<='Z'){
			key[i]+=32;
		}
	}
	strcpy(list[n],key);
	memset(key,'\0',strlen(key));
	num[n]+=m;
	n++;
	while(1){
		if(feof(f)){
			break;
		}
		fscanf(f,"%[^,],%d\n",key,&m);
		for(i=0;i<strlen(key);i++){
			if(key[i]>='A'&&key[i]<='Z'){
				key[i]+=32;
			}
		}
		int flag=0;
		for(i=0;i<n;i++){
			if(strcmp(key,list[i])==0){
				num[i]+=m;
				flag++;
				break;
			}
		}
		if(flag==0){
			strcpy(list[n],key);
			num[n]+=m;
			n++;
		}
		memset(key,'\0',strlen(key));
	}
	fclose(f);
	int temp,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(strcmp(list[j],list[j+1])>0){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
				strcpy(key,list[j]);
				memset(list[j],'\0',strlen(list[j]));
				strcpy(list[j],list[j+1]);
				memset(list[j+1],'\0',strlen(list[j+1]));
				strcpy(list[j+1],key);
				memset(key,'\0',strlen(key));
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s,%d\n",list[i],num[i]);
	}
	return 0;
}

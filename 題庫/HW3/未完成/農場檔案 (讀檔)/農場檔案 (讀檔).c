#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char *n1=(char*)malloc(sizeof(char)*2000),**name=(char**)malloc(sizeof(char*)*2000);
	int j;
	for(j=0;j<2000;j++){
		name[j]=(char*)malloc(sizeof(char)*2000);
	}
	int *num=(int*)malloc(sizeof(int)*2000),i=0;
	scanf("%s",n1);
	FILE *f1=fopen(n1,"r");
	while(1){
		if(feof(f1)){
			break;
		}
		fscanf(f1,"%s",name[i]);
		fscanf(f1,"%*[^\n]\n");
		fscanf(f1,"%d",&num[i]);
		fscanf(f1,"%*[^\n]\n");
		i++;
	}
	fclose(f1);
	free(n1);
	int k;
	for(j=0;j<i;j++){
		if(num[j]<50){
			int temp;
			char *key=(char*)malloc(sizeof(char)*2000);
			memset(name[j],'\0',strlen(name[j]));
			num[j]='\0';
			for(k=j;k<i-1;k++){
				temp=num[k];
				num[k]=num[k+1];
				num[k+1]=temp;
				strcpy(key,name[j]);
				memset(name[j],'\0',strlen(name[j]));
				strcpy(name[j],name[j+1]);
				memset(name[j+1],'\0',strlen(name[j+1]));
				strcpy(name[j+1],key);
				memset(key,'\0',strlen(key));
			}
			free(key);
			i--;
		}
	}
	for(j=0;j<i;j++){
		printf("%s %d\n",name[j],num[j]);
	}
	for(j=0;j<2000;j++){
		free(name[j]);
	}
	free(name);
	free(num);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	int n;
	char s[128];
	memset(s,'\0',128);
	scanf("%d",&n);
	scanf("%s",s);
	FILE *f=fopen(s,"r");
	int i;
	char t[100][200];
	for(i=0;i<100;i++){
		memset(t[i],'\0',200);
	}
	int j=0;
	while(1){
		if(feof(f)){
			break;
		}
		fscanf(f,"%s\n",t[j]);
		j++;
	}
	fclose(f);
	for(i=0;i<j;i++){
		if((i+1)%n==0){
			continue;
		}
		printf("%s ",t[i]);
	}
	return 0;
}

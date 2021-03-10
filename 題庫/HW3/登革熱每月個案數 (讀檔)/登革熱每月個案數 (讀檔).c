#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char s[200]={'\0'};
	scanf("%s",s);
	FILE *f=fopen(s,"r");
	fscanf(f,"%*[^\n]");
	fscanf(f,"%*c");
	char key,ca[26]={'\0'};
	int num[26][12]={0},i=0,j,k,n;
	while(1){
		if(feof(f)){
			break;
		}
		fscanf(f,"%c,",&key);
		int flag=0;
		if(i!=0){
			for(j=0;j<i;j++){
				if(ca[j]==key){
					k=j;
					flag++;
					break;
				}
			}
		}
		if(flag==0){
			ca[i]=key;
			k=i;
			i++;
		}
		fscanf(f,"%*[^,],%d\n",&n);
		num[k][n-1]++;
	}
	fclose(f);
	printf("Area Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
	for(j=0;j<i;j++){
		for(k=0;k<i-1;k++){
			if(ca[k]>ca[k+1]){
				int temp[12];
				key=ca[k];
				ca[k]=ca[k+1];
				ca[k+1]=key;
				memcpy(temp,num[k],sizeof(int)*12);
				memcpy(num[k],num[k+1],sizeof(int)*12);
				memcpy(num[k+1],temp,sizeof(int)*12);
			}
		}
	}
	for(j=0;j<i;j++){
		printf("%4c",ca[j]);
		for(k=0;k<12;k++){
			printf("%4d",num[j][k]);
		}
		printf("\n");
	}
	return 0;
} 

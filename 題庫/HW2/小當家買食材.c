#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k=0,num[n],key1;
	char key[100],name[n][100];
	memset(key,'\0',strlen(key));
	for(i=0;i<n;i++){
		memset(name[i],'\0',100);
	}
	for(i=0;i<n;i++){
		scanf("%s",key);
		scanf("%d",&key1);
		if(k==0){
			strcpy(name[k],key);
			memset(key,'\0',strlen(key));
			num[k]=key1;
			k++;
		}
		else{
			int flag1=0;
			for(j=0;j<k;j++){
				if(strcmp(key,name[j])==0){
					flag1++;
					break;
				}
			}
			if(flag1==0){
				strcpy(name[k],key);
				memset(key,'\0',strlen(key));
				num[k]=key1;
				k++;
			}
			else{
				for(j=0;j<k;j++){
					if(strcmp(key,name[j])==0){
						num[j]+=key1;
						break;
					}
				}
			}
		}
	}
	int max=0,pos=0;
	for(i=0;i<k;i++){
		if(num[i]>max){
			max=num[i];
			pos=i;
		}
	}
	printf("%s %d",name[pos],max);
	return 0;
}

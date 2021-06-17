#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char key[10];
	int i=0,j,d=0;
	while(1){
		gets(key);
		if(strcmp(key,"q")==0){
			break;
		}
		int flag1=0,flag2=0;
		for(j=0;j<strlen(key);j++){
			if(key[j]=='.'){
				flag1++;
				break;
			}
			else if(key[j]>='a'&&key[j]<='z'){
				flag2++;
				break;
			}
			else if(key[j]>='A'&&key[j]<='Z'){
				flag2++;
				break;
			}
		}
		if(flag1!=0&&flag2==0){
			d++;
		}
		else if(flag1==0&&flag2==0){
			i++;
		}
		memset(key,'\0',strlen(key));
	}
	printf("%d\n%d",d,i);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	char key[5];
	int n=0,sum=0,flag=0;
	while(1){
		scanf("%s",key);
		if(key[0]=='q'){
			break;
		}
		if(key[0]=='1'){
			flag=1;
		}
		else if(key[0]=='9'&&flag==1){
			sum++;
		}
		if(key[0]!='1'){
			flag=0;
		}
	}
	printf("%d",sum);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	int K,L;
	scanf("%d%d",&K,&L);
	char str[300],name[100],ranking[2],type;
	int credit,R=0,E=0;
	while(1){
		gets(str);
		if(str[0]=='q'&&str[1]=='\0'){
			break;
		}
		sscanf(str,"%[^,],%[^,],%c,%d",name,ranking,&type,&credit);
		if(ranking[0]=='F'&&ranking[1]=='\0'){
			continue;
		}
		else{
			if(type=='R'){
				R+=credit;
			}
			else if(type=='E'){
				E+=credit;
			}
		}
	}
	if(R>=K&&E>=L){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}

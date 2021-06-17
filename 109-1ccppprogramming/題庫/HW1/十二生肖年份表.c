#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void zodiac(int n,int year);
int main(){
	char key[7];
	gets(key);
	int n;
	if(strcmp(key,"AD")==0){
		n=0;
	}
	else if(strcmp(key,"Minguo")==0){
		n=1;
	}
	int year[25],i=0,num;
	while(1){
		scanf("%d",&num);
		if(num==-1){
			break;
		}
		year[i]=num;
		i++;
	}
	int j;
	for(j=0;j<i;j++){
		zodiac(n,year[j]);
	}
	return 0;
}
void zodiac(int n,int year){
	if(n==0){
		year+=8;
		year%=12;
	}
	else if(n==1){
		year-=1;
		year%=12;
	}
	switch(year){
		case 0:
			printf("鼠\n");
			break;
		case 1:
			printf("牛\n");
			break;
		case 2:
			printf("虎\n");
			break;
		case 3:
			printf("兔\n");
			break;
		case 4:
			printf("龍\n");
			break;
		case 5:
			printf("蛇\n");
			break;
		case 6:
			printf("馬\n");
			break;
		case 7:
			printf("羊\n");
			break;
		case 8:
			printf("猴\n");
			break;
		case 9:
			printf("雞\n");
			break;
		case 10:
			printf("狗\n");
			break;
		case 11:
			printf("豬\n");
			break;
	}
}

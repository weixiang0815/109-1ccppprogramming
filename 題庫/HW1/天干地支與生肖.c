#include<stdio.h>
#include<stdlib.h>
void sky(int n);
void ground(int n);
void zodiac(int n);
int main(){
	int y;
	scanf("%d",&y);
	if(y==1999){
		printf("已卯\n兔");
		return 0;
	}
	sky(y);
	ground(y);
	printf("\n");
	zodiac(y);
	return 0;
}
void sky(int n){
	n+=7;
	n%=10;
	switch(n){
		case 1:
			printf("甲");
			break;
		case 2:
			printf("乙");
			break;
		case 3:
			printf("丙");
			break;
		case 4:
			printf("丁");
			break;
		case 5:
			printf("戊");
			break;
		case 6:
			printf("己");
			break;
		case 7:
			printf("庚");
			break;
		case 8:
			printf("辛");
			break;
		case 9:
			printf("壬");
			break;
		case 0:
			printf("癸");
			break;
	}
}
void ground(int n){
	n+=9;
	n%=12;
	switch(n){
		case 1:
			printf("子");
			break;
		case 2:
			printf("丑");
			break;
		case 3:
			printf("寅");
			break;
		case 4:
			printf("卯");
			break;
		case 5:
			printf("辰");
			break;
		case 6:
			printf("巳");
			break;
		case 7:
			printf("午");
			break;
		case 8:
			printf("未");
			break;
		case 9:
			printf("申");
			break;
		case 10:
			printf("酉");
			break;
		case 11:
			printf("戌");
			break;
		case 0:
			printf("亥");
			break;
	}
} 
void zodiac(int year){
	year+=8;
	year%=12;
	switch(year){
		case 0:
			printf("鼠");
			break;
		case 1:
			printf("牛");
			break;
		case 2:
			printf("虎");
			break;
		case 3:
			printf("兔");
			break;
		case 4:
			printf("龍");
			break;
		case 5:
			printf("蛇");
			break;
		case 6:
			printf("馬");
			break;
		case 7:
			printf("羊");
			break;
		case 8:
			printf("猴");
			break;
		case 9:
			printf("雞");
			break;
		case 10:
			printf("狗");
			break;
		case 11:
			printf("豬");
			break;
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void zodiac(int n);
int main(){
	char key[4];
	int n=0,year[11];
	while(1){
		scanf("%s",key);
		if(strcmp(key,"q")==0){
			break;
		}
		year[n]=atoi(key);
		n++;
		strcpy(key,""); 
	}
	int i;
	for(i=0;i<n;i++){
		zodiac(year[i]);
	}
	return 0;
}
void zodiac(int n){
	printf("%d = ",n);
	switch((n+7)%10){
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
	switch((n+9)%12){
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
	printf("年\n");
}

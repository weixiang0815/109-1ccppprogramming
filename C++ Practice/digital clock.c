#include<stdio.h>
#include<windows.h>
int main(){
	int hr,min,sec;
	scanf("%d%d%d",&hr,&min,&sec);
	if(hr>=24||min>=60||sec>=60){
		printf("An error has occurred!\n");
		exit(0);
	}
	system("cls");
	while(1){
		printf("Clock: ");
		printf("%02d:%02d:%02d",hr,min,sec);
		sec++;
		if(sec==60){
			min++;
			sec*=0;
		}
		if(min==60){
			hr++;
			min*=0;
		}
		if(hr==24){
			hr*=0;
		}
		Sleep(1000);
		system("cls");
	}
	return 0;
}

#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int hr,min,sec;
	cin>>hr>>min>>sec;
	if(hr>=24||min>=60||sec>=60){
		cout<<"An error has occured!\n";
		exit(0);
	}
	system("cls");
	while(1){
		cout<<"Clock: ";
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

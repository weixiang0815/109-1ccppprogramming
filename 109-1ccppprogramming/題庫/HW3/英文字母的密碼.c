#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
void decode(int n);
int main(){
	char key[50],n[5];
	gets(key);
	int i,num[10],j=0,k=0;
	for(i=0;i<strlen(key);i++){
		if(key[i]=='-'){
			num[k]=atoi(n);
			k++;
			memset(n,'\0',strlen(n));
			j*=0;
		}
		else{
			n[j]=key[i];
			j++;
		}
	}
	num[k]=atoi(n);
	k++; //num°}¦C¦³k­Ó¼Æ¦r 
	for(i=0;i<k;i++){
		decode(num[i]);
	}
	return 0;
}
void decode(int n){
	int i,a=n/26,b=n%26;
	char alphabet;
	switch(b){
		case 1:
			alphabet='a';
			break;
		case 2:
			alphabet='b';
			break;
		case 3:
			alphabet='c';
			break;
		case 4:
			alphabet='d';
			break;
		case 5:
			alphabet='e';
			break;
		case 6:
			alphabet='f';
			break;
		case 7:
			alphabet='g';
			break;
		case 8:
			alphabet='h';
			break;
		case 9:
			alphabet='i';
			break;
		case 10:
			alphabet='j';
			break;
		case 11:
			alphabet='k';
			break;
		case 12:
			alphabet='l';
			break;
		case 13:
			alphabet='m';
			break;
		case 14:
			alphabet='n';
			break;
		case 15:
			alphabet='o';
			break;
		case 16:
			alphabet='p';
			break;
		case 17:
			alphabet='q';
			break;
		case 18:
			alphabet='r';
			break;
		case 19:
			alphabet='s';
			break;
		case 20:
			alphabet='t';
			break;
		case 21:
			alphabet='u';
			break;
		case 22:
			alphabet='v';
			break;
		case 23:
			alphabet='w';
			break;
		case 24:
			alphabet='x';
			break;
		case 25:
			alphabet='y';
			break;
		case 0:
			alphabet='z';
			break;
	}
	if(alphabet=='z'){
		for(i=0;i<a;i++){
			printf("%c",alphabet);
		}
	}
	else{
		for(i=0;i<a+1;i++){
			printf("%c",alphabet);
		}
	}
}

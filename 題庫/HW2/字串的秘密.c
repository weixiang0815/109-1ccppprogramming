#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void upper(char *a,int n);
int decode(char *a,int n);
int main(){
	int n;
	scanf("%d",&n);
	char a[n][30];
	int i,code[n];
	for(i=0;i<n;i++){
		char *key;
		key=(char*)malloc(sizeof(char)*30);
		scanf("%s",key);
		upper(key,strlen(key));
		code[i]=decode(key,strlen(key));
		strcpy(a[i],key);
		free(key);
	}
	for(i=0;i<n;i++){
		printf("%s = %d\n",a[i],code[i]);
	}
	int max=code[0],maxpos=0;
	for(i=1;i<n;i++){
		if(code[i]>max){
			max=code[i];
			maxpos=i;
		}
		else if(code[i]==code[i-1]){
			continue;
		}
	}
	printf("%s is the key.",a[maxpos]);
	return 0;
}
void upper(char *a, int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
	}
}
int decode(char *a,int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		switch(a[i]){
			case 'A':
				sum+=1;
				break;
			case 'B':
				sum+=2;
				break;
			case 'C':
				sum+=3;
				break;
			case 'D':
				sum+=4;
				break;
			case 'E':
				sum+=5;
				break;
			case 'F':
				sum+=6;
				break;
			case 'G':
				sum+=7;
				break;
			case 'H':
				sum+=8;
				break;
			case 'I':
				sum+=9;
				break;
			case 'J':
				sum+=10;
				break;
			case 'K':
				sum+=11;
				break;
			case 'L':
				sum+=12;
				break;
			case 'M':
				sum+=13;
				break;
			case 'N':
				sum+=14;
				break;
			case 'O':
				sum+=15;
				break;
			case 'P':
				sum+=16;
				break;
			case 'Q':
				sum+=17;
				break;
			case 'R':
				sum+=18;
				break;
			case 'S':
				sum+=19;
				break;
			case 'T':
				sum+=20;
				break;
			case 'U':
				sum+=21;
				break;
			case 'V':
				sum+=22;
				break;
			case 'W':
				sum+=23;
				break;
			case 'X':
				sum+=24;
				break;
			case 'Y':
				sum+=25;
				break;
			case 'Z':
				sum+=26;
				break;
		}
	}
	return sum;
}

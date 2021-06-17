#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char key[5];
	double a=1;
	int b=1;
	while(1){
		gets(key);
		if(key[0]=='q'){
			break;
		}
		int i=0,flag=0;
		while(key[i]!='\0'){
			if(key[i]=='\0'){
				break;
			}
			if(key[i]=='.'){
				a*=atof(key);
				flag++;
				break;
			}
			i++;
		}
		if(flag==0){
			b*=atoi(key);
		}
		strcpy(key,"");
	}
	printf("%.2lf\n%d\n",a,b);
	if(a>b){
		printf("Float > Int");
	}
	else if(a<b){
		printf("Float < Int");
	}
	else{
		printf("Float = Int");
	}
	return 0;
}

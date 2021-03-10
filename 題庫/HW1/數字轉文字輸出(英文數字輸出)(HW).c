#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void translateNumber(char *n);
void NumberUnder1000(char *n);
void NumberUnder100(char *n);
void NumberUnder20(char *n);
void NumberUnder10(char n);
int main(){
	char n[8]={'\0'};
	scanf("%s",n);
	translateNumber(n);
	if(strcmp(n,"1")==0){
		printf("dollar");
	}
	else{
		printf("dollars");
	}
	return 0;
}
void translateNumber(char *n){
	char a[3]={'\0'},b[3]={'\0'},c;
	int i,m=strlen(n);
	if(m==7){
		c=n[0];
		NumberUnder10(c);
		printf("million ");
		for(i=0;i<3;i++){
			a[i]=n[i+1];
			b[i]=n[i+4];
		}
		NumberUnder1000(a);
		printf("thousand ");
		NumberUnder1000(b);
	}
	else if(m>3&&m<7){
		for(i=0;i<m-3;i++){
			a[i]=n[i];
		}
		for(i=m-3;i<m;i++){
			b[i-m+3]=n[i];
		}
		if(strlen(a)==1){
			NumberUnder10(a[0]);
		}
		else if(strlen(a)==2){
			NumberUnder100(a);
		}
		else if(strlen(a)==3){
			NumberUnder1000(a);
		}
		printf("thousand ");
		NumberUnder1000(b);
	}
	else if(m>1&&m<4){
		NumberUnder1000(n);
	}
	else if(m==1){
		NumberUnder10(n[0]);
	}
}
void NumberUnder1000(char *n){
	NumberUnder10(n[0]);
	printf("hundred ");
	char a[2]={'\0'};
	a[0]=n[1];
	a[1]=n[2];
	NumberUnder100(a);
}
void NumberUnder100(char *n){
	if(n[0]=='1'){
		NumberUnder20(n);
	}
	else{
		if(n[0]=='2'){
			printf("twenty ");
		}
		else if(n[0]=='3'){
			printf("thirty ");
		}
		else if(n[0]=='4'){
			printf("fourty ");
		}
		else if(n[0]=='5'){
			printf("fifty ");
		}
		else if(n[0]=='6'){
			printf("sixty ");
		}
		else if(n[0]=='7'){
			printf("seventy ");
		}
		else if(n[0]=='8'){
			printf("eighty ");
		}
		else if(n[0]=='9'){
			printf("ninety ");
		}
		NumberUnder10(n[1]);
	}
}
void NumberUnder20(char *n){
	if(n[1]=='0'){
		printf("ten ");
	}
	else if(n[1]=='1'){
		printf("eleven ");
	}
	else if(n[1]=='2'){
		printf("twelve ");
	}
	else if(n[1]=='3'){
		printf("thirteen ");
	}
	else if(n[1]=='4'){
		printf("fourteen ");
	}
	else if(n[1]=='5'){
		printf("fifteen ");
	}
	else if(n[1]=='6'){
		printf("sixteen ");
	}
	else if(n[1]=='7'){
		printf("seventeen ");
	}
	else if(n[1]=='8'){
		printf("eighteen ");
	}
	else if(n[1]=='9'){
		printf("nineteen ");
	}
}
void NumberUnder10(char n){
	if(n=='1'){
		printf("one ");
	}
	else if(n=='2'){
		printf("two ");
	}
	else if(n=='3'){
		printf("three ");
	}
	else if(n=='4'){
		printf("four ");
	}
	else if(n=='5'){
		printf("five ");
	}
	else if(n=='6'){
		printf("six ");
	}
	else if(n=='7'){
		printf("seven ");
	}
	else if(n=='8'){
		printf("eight ");
	}
	else if(n=='9'){
		printf("nine ");
	}
}

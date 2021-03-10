#include<stdio.h>
int main(){
	int password,key;
	scanf("%d",&password);
	if(password<=0||password>=2000000000){
		printf("Wrong Password Setting!");
		return 0;
	}
	
	do{
		scanf("%d",&key);
		if(key==password){
			printf("Correct!");
			break;
		}
		printf("Wrong Password!\n");
	}while(key!=password);
	return 0;
}

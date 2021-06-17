#include<stdio.h>
int main (){
	char key;
	do{
		scanf(" %c",&key);
		if(key=='q'){
			printf("%c",key);
			break;
		}
		printf("%c\n",key);
	}while(key!='q');
	return 0;
}

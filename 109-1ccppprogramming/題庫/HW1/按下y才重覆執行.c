#include<stdio.h>
int main(){
	char key;
	do{
		scanf(" %c",&key);
		if(key!='y'){
			break;
		}
		printf("run\n");
	}while(key=='y');
	return 0;
}

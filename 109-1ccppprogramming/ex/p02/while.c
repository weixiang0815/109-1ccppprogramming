#include<stdio.h>
int main(){
	char key=0;
	while(key!='q'){
		scanf(" %c",&key);
		printf("%c\n",key);
	}
	int i=1;
	while(i<=10){
		printf("%d\n",i);
		i++;
	}
	return 0;
}

#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=5;i++){
		int j;
		for(j=1;j<=5-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=5;i++){
		int j;
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(j=6-i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

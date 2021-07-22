#include<stdio.h>
int main(){
	int i;
	for(i=5;i>=1;i--){
		int j;
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

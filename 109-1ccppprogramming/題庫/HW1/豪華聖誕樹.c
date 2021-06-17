#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;//1 4 3 3 5 2 j k
	for(i=0;i<n-1;i++){
		printf(" ");
	}//1 6 3 5 5 4 7 3 9 2 11 1
	puts("*");
	int j,k,l;//1 1 2 3 3 5
	for(i=1;i<=n-2;i++){
		for(j=i;j<=i+2;j++){
			for(k=1;k<=n-j;k++){
				printf(" ");
			}
			for(k=1;k<=j;k++){
				printf("^");
			}
			for(k=1;k<j;k++){
				printf("^");
			}
			puts("");
		}
	}
	for(i=1;i<=n-2;i++){ 
		for(j=1;j<=n/2+1;j++){
			printf(" ");
		}
		for(j=1;j<=n-2;j++){
			printf("#");
		}
		puts("");
	}
	return 0;
}

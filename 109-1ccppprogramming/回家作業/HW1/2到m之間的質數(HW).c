#include<stdio.h>
#include<stdlib.h>
int main(){
	int m;
	scanf("%d",&m);
	int i;
	for(i=2;i<=m;i++){
		if(i==2){
			printf("2 is prime\n");
			continue;
		}
		int j=2;
		while(i%j!=0){
			j++;
			if(j==i){
				printf("%d is prime\n",i);
				break;
			}
		}
		continue;
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int t=1,j=n,i=1;
	while(1){
		if(i%2==1){
			if(t+1==j||t-1==j){
				printf("Tom\n");
				return 0;
			}
			else{
				t++;
				i++;
				continue;
			}
		}
		else{
			if(j+1==t||j-1==t){
				printf("Jerry\n");
				return 0;
			}
			else{
				j--;
				i++;
				continue;
			}
		}
	}
	return 0;
}

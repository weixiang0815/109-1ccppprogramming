#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int main(){
	char ans[4],guess[4];
	memset(ans,'\0',4);
	memset(guess,'\0',4);
	scanf("%s",ans);
	int i,j;
	while(1){
		scanf("%s",guess);
		if(strcmp(ans,guess)==0){
			printf("4A0B\n");
			printf("You Win!");
			break;
		}
		int flagA=0,flagB=0;
		for(i=0;i<4;i++){
			int flag=0;
			if(i!=0){
				for(j=0;j<i;j++){
					if(guess[j]==guess[i]){
						flag++;
					}
				}
			}
			for(j=0;j<4;j++){
				if(guess[i]==ans[j]){
					if(flag==0){
						if(i==j){
							flagA++;
						}
						else{
							flagB++;
						}
					}
				}
			}
		}
		printf("%dA%dB\n",flagA,flagB);
		memset(guess,'\0',4);
	}
	return 0;
}

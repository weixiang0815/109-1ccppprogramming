#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int N;
	scanf("%d",&N);
	char str[N][4],A1[4]="yes",A2[4]="no",O1[4]="YES",O2[4]="NO";
	int i;
	for(i=0;i<N;i++){
		scanf("%s",&str[i]);
	}
	int a=0,o=0,u=0;
	for(i=0;i<N;i++){
		if(strncmp(str[i],A1,strlen(A1))==0||strncmp(str[i],A2,strlen(A2))==0){
			a++;
		}
		else if(strncmp(str[i],O1,strlen(O1))==0||strncmp(str[i],O2,strlen(O2))==0){
			o++;
		}
		else{
			u++;
		}
	}
	printf("%d %d %d\n",a,o,u);
	return 0;
}

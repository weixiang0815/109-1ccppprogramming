#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<math.h>
int main(){
	int score[1000][2],fail[1000],i=0,j=0;
	char n[200];
	memset(n,'\0',200);
	scanf("%s",n);
	FILE *f=fopen(n,"r");
	fscanf(f,"%*[^\n]");
	fscanf(f,"%*c");
	while(1){
		fscanf(f,"%d,%d\n",&score[i][0],&score[i][1]);
		if(sqrt((double)score[i][1])*11<60){
			fail[j]=score[i][0];
			j++;
		}
		i++;
		if(feof(f)){
			break;
		}
	}
	fclose(f);
	int k,temp;
	for(i=0;i<j;i++){
		for(k=1;k<j;k++){
			if(fail[k]<fail[k-1]){
				temp=fail[k];
				fail[k]=fail[k-1];
				fail[k-1]=temp;
			}
		}
	}
	for(i=0;i<j;i++){
		if(i==j-1){
			printf("%d",fail[i]);
		}
		else{
			printf("%d ",fail[i]);
		}
	}
	return 0;
}

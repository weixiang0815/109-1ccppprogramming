#include<stdio.h>
int main(){
	int score;
	char key;
	do{
		scanf("%d",&score);
		if(score>=60){
			printf("pass\n");
		}
		else{
			printf("fail\n");
		}
		scanf(" %c",&key);
		if(key!='y'){
			break;
		}
	}while(key=='y');
	return 0;
}

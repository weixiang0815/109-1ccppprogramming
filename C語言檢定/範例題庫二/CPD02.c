#include<stdio.h>
int main(){
	int score;
	scanf("%d", &score);
	if(score<0||score>100){
		printf("error\n");
	}
	else{
		if(score>60){
			score+=10;
		}
		else{
			score+=5;
		}
		if(score>100){
			printf("error\n");
		}
		else{
			printf("%d\n", score);
		}
	}
	return 0;
}

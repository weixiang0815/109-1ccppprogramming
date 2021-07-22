#include<stdio.h>
int compute(int score);
int main(){
	int score;
	scanf("%d", &score);
	printf("%d\n", compute(score));
	return 0;
}
int compute(int score){
	if(score<0||score>100){
		return -1;
	}
	else{
		if(score>=60){
			return score+=5;
		}
		else{
			return score+=10;
		}
	}
}

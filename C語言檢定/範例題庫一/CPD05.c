#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[10];
	int score;
};
int main(){
	struct student st1;
	printf("請輸入姓名:");
	scanf("%10s", st1.name);
	printf("請輸入分數:");
	scanf("%d", &st1.score);
	printf("%s的成績是%d\n", st1.name, st1.score);
	if(st1.score<60){
		printf("抱歉您被當了\n");
	}
	else{
		printf("恭喜您通過了\n");
	}
	system("PAUSE");
	return 0;
}

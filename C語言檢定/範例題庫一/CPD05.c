#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[10];
	int score;
};
int main(){
	struct student st1;
	printf("�п�J�m�W:");
	scanf("%10s", st1.name);
	printf("�п�J����:");
	scanf("%d", &st1.score);
	printf("%s�����Z�O%d\n", st1.name, st1.score);
	if(st1.score<60){
		printf("��p�z�Q��F\n");
	}
	else{
		printf("���߱z�q�L�F\n");
	}
	system("PAUSE");
	return 0;
}

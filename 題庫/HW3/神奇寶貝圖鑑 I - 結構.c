#include<stdio.h>
#include<stdlib.h>
struct pokemon{
	char name[100];
	int lv,hp;
};
int main(){
	struct pokemon p1,p2;
	scanf("%s%d%d",p1.name,&p1.lv,&p1.hp);
	scanf("%s%d%d",p2.name,&p2.lv,&p2.hp);
	printf("Name: %s\nLv: %d\nHP: %d\n\n",p1.name,p1.lv,p1.hp);
	printf("Name: %s\nLv: %d\nHP: %d\n\n",p2.name,p2.lv,p2.hp);
	return 0;
}

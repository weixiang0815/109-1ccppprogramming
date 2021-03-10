#include<stdio.h>
#include<stdlib.h>
struct Pokemon{
	char name[80];
	int Lv,Hp;
};
int main(){
	struct Pokemon p1,p2={"§p§ı¿s",15,15};
	scanf("%s",p1.name);
	scanf("%d",&p1.Lv);
	scanf("%d",&p1.Hp);
	printf("Name:%s\n",p1.name);
	printf("Level:%d\n",p1.Lv);
	printf("Hp:%d\n\n",p1.Hp);
	printf("Name:%s\n",p2.name);
	printf("Level:%d\n",p2.Lv);
	printf("Hp:%d\n\n",p2.Hp);
	return 0;
}

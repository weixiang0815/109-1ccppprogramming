#include<stdio.h>
#include<stdlib.h>
struct Pokemon{
	char name[80];
	int Lv,Hp;
};
int main(){
	struct Pokemon p1={"¤p¤õÀs",15,20};
	struct Pokemon *p2=&p1;
	printf("Name:%s\n",p2->name);
	printf("Level:%d\n",p2->Lv);
	printf("Hp:%d\n",p2->Hp);
	return 0;
}

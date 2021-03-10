#include"pokemon.h"
#include<stdio.h>
void InputData(struct Pokemon *p){
	scanf("%s%d%d",p->Name,&p->Lv,&p->Hp);
}
void ShowInfo(struct Pokemon p){
	printf("Name: %s\n",p.Name);
	printf("Lv: %d\n",p.Lv);
	printf("HP: %d\n\n",p.Hp);
}

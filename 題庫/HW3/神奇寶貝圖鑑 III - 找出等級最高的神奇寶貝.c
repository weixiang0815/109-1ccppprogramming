#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
struct Pokemon{
	char Name[100];
	int Lv;
	int Hp;
};
typedef struct Pokemon pok;
int main(){
	pok p[3];
	int i;
	for(i=0;i<3;i++){
		scanf("%s%d%d",p[i].Name,&p[i].Lv,&p[i].Hp);
	}
	int max=0;
	for(i=1;i<3;i++){
		if(p[i].Lv>p[max].Lv){
			max=i;
		}
	}
	printf("Name: %s\n",p[max].Name);
	printf("Lv: %d\n",p[max].Lv);
	printf("HP: %d\n",p[max].Hp);
	return 0;
}

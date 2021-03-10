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
	int i,n,flag=0;
	for(i=0;i<3;i++){
		scanf("%s%d%d",p[i].Name,&p[i].Lv,&p[i].Hp);
	}
	scanf("%d",&n);
	for(i=0;i<3;i++){
		if(p[i].Lv>=n){
			printf("Name: %s\n",p[i].Name);
			printf("Lv: %d\n",p[i].Lv);
			printf("HP: %d\n\n",p[i].Hp);
			flag++;
		}
	}
	if(flag==0){
		printf("not found");
	}
	return 0;
}

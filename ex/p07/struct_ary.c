#include<stdio.h>
#include<stdlib.h>
#define N 3
struct Pokemon{
	char name[80];
	int Lv,Hp;
};
typedef struct Pokemon Pokemon;
int main(){
	Pokemon p[N];
	int i;
	for(i=0;i<N;i++){
		scanf("%s",p[i].name);
		scanf("%d",&p[i].Lv);
		scanf("%d",&p[i].Hp);
	}
	puts("");
	for(i=0;i<N;i++){
		printf("Name:%s\n",p[i].name);
		printf("Level:%d\n",p[i].Lv);
		printf("Hp:%d\n\n",p[i].Hp);
	}
	return 0;
}

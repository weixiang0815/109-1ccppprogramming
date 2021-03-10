#include<stdio.h>
#include<stdlib.h>
#define N 3
struct Employee{
	char Name[20];
	char Phone[11];
	int Id;
};
typedef struct Employee emp;
int main(){
	emp p[N];
	int i,qid;
	for(i=0;i<N;i++){
		scanf("%s",p[i].Name);
		scanf("%s",p[i].Phone);
		scanf("%d",&p[i].Id);
	}
	scanf("%d",&qid);
	int flag=0;
	for(i=0;i<N;i++){
		if(qid==p[i].Id){
			puts("found");
			printf("Name:%s\n",p[i].Name);
			printf("Phone: %s\n",p[i].Phone);
			printf("Id: %d\n\n",p[i].Id);
			flag++;
		}
	}
	if(flag==0){
		puts("not found");
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct Employee
{
    char Name[20];
    char Phone[11];
    int id;
};
int main(){
	struct Employee emp[3];
	int i;
	for(i=0;i<3;i++){
		scanf("%s",&emp[i].Name);
		scanf("%s",&emp[i].Phone);
		scanf("%d",&emp[i].id);
	}
	int checkid,flag=0;
	scanf("%d",&checkid);
	for(i=0;i<3;i++){
		if(checkid==emp[i].id){
			printf("found\n");
			printf("Name: %s\n",emp[i].Name);
			printf("Phone: %s\n",emp[i].Phone);
			printf("Id: %d",emp[i].id);
			flag++;
			break;
		}
	}
	if(flag==0){
		printf("not found");
	}
	return 0;
}

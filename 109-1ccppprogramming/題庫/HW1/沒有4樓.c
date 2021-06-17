#include<stdio.h>
int main(){
	int floor,destination;
	scanf("%d",&destination);
	for(floor=1;floor<=destination;floor++){
		if(floor==4){
			continue;
		}
		else{
			printf("floor %d\n",floor);
		}
	}
	return 0;
}

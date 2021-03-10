#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	switch(n){
		case 3:
			printf("Spring");
			break;
		case 4:
			printf("Spring");
			break;
		case 5:
			printf("Spring");
			break;
		case 6:
			printf("Summer");
			break;
		case 7:
			printf("Summer");
			break;
		case 8:
			printf("Summer");
			break;
		case 9:
			printf("Autumn");
			break;
		case 10:
			printf("Autumn");
			break;
		case 11:
			printf("Autumn");
			break;
		case 12:
			printf("Winter");
			break;
		case 1:
			printf("Winter");
			break;
		case 2:
			printf("Winter");
			break;
		default:
			printf("Month doesn't exist!");
			return 0;
	}
	return 0;
} 

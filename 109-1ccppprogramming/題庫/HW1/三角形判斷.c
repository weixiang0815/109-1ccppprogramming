#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b){
		printf("True\n");
		if(a>b && a>c){
			if(b^2+c^2==a^2){
				printf("Right Triangle");
				return 0;
			}
			else{
				printf("Non-Right Triangle");
				return 0;
			}
		}
		else if(b>a && b>c){
			if(a^2+c^2==b^2){
				printf("Right Triangle");
				return 0;
			}
			else{
				printf("Non-Right Triangle");
				return 0;
			}
		}
		else if(c>b && c>a){
			if(a^2+b^2==c^2){
				printf("Right Triangle");
				return 0;
			}
			else{
				printf("Non-Right Triangle");
				return 0;
			}
		}
		else{
			printf("Non-Right Triangle");
			return 0;
		}
	}
	else{
		printf("False");
		return 0;
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	b=a/12;
	c=a%12;
	if(c!=0){
		printf("%d dozen and %d",b,c);
		return 0;
	}
	else{
		printf("%d dozen",b);
		return 0;
	}
	return 0;
} 

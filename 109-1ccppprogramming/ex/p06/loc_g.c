#include<stdio.h>
#include<stdlib.h>
int g=10;
void func(){
	int x=0;
	printf(" func(): g=%d, x=%d\n",g,x);
	x=5;
	printf(" func(): g=%d, x=%d\n",g,x);
	g=20;
	printf(" func(): g=%d, x=%d\n",g,x);
}
int main(){
	int x=100;
	printf("main(): g=%d, x=%d\n",g,x);
	func();
	printf("main(): g=%d, x=%d\n",g,x);
	return 0;
}

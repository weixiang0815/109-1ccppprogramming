#include<stdio.h>
#include<stdlib.h>
void func(int c){
	int a=77;
	int b=88;
	printf(" 改變前 a=%d b=%d c=%d\n",a,b,c);
	c=99;
	printf(" 改變後 a=%d b=%d c=%d\n",a,b,c);
}
int main(){
	int a,b,c;
	a=10;
	b=20;
	c=30;
	printf("呼叫前 a=%d b=%d c=%d\n",a,b,c);
	func(c);
	printf("呼叫後 a=%d b=%d c=%d\n",a,b,c);
	return 0;
} 

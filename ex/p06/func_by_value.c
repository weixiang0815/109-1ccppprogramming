#include<stdio.h>
#include<stdlib.h>
void func(int c){
	int a=77;
	int b=88;
	printf(" ���ܫe a=%d b=%d c=%d\n",a,b,c);
	c=99;
	printf(" ���ܫ� a=%d b=%d c=%d\n",a,b,c);
}
int main(){
	int a,b,c;
	a=10;
	b=20;
	c=30;
	printf("�I�s�e a=%d b=%d c=%d\n",a,b,c);
	func(c);
	printf("�I�s�� a=%d b=%d c=%d\n",a,b,c);
	return 0;
} 

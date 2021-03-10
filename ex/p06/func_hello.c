#include<stdio.h>
#include<stdlib.h>
void hello(int n){
	int i;
	for(i=0;i<n;i++){
		puts("hello");
	}
}
int main(){
	int x;
	scanf("%d",&x);
	hello(x);
	puts("函式呼叫前");
	hello(3);
	puts("函式呼叫後");
	hello(5);
	return 0;
} 

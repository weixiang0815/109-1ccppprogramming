#include<iostream>
using namespace std;
/*void MySwap(int a,int b){
	cout<<"by value: a="<<a<<", b="<<b<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"by value: a="<<a<<", b="<<b<<endl;
}*/
void MySwap(int &a,int &b){
	cout<<"by ref: a="<<a<<", b="<<b<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"by ref: a="<<a<<", b="<<b<<endl;
}
void MySwap(int *a,int *b){
	cout<<"by addr: *a="<<*a<<", *b="<<*b<<endl;
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"by addr: *a="<<*a<<", *b="<<*b<<endl;
}
int main(){
	int x=10,y=20;
	cout<<"x="<<x<<", y="<<y<<endl;
	MySwap(x,y);
	cout<<"x="<<x<<", y="<<y<<endl;
	MySwap(&x,&y);
	cout<<"x="<<x<<", y="<<y<<endl;
	return 0;
}

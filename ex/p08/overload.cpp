#include<iostream>
using namespace std;
void show(int a){
	cout<<"int a="<<a<<endl;
}
void show(int a,int b){
	cout<<"int a="<<a<<", int b="<<b<<endl;
}
void show(double a){
	cout<<"double a="<<a<<endl;
}
int main(){
	int x1=10,y1=20;
	double x2=22.2,y2=33.3;
	show(x1);
	show(x1,y1);
	show(x2);
	show(x2,y2);
	show('A');
	show('A','B');
	return 0;
}

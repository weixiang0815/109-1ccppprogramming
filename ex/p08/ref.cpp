#include<iostream>
using namespace std;
int main(){
	int var=99;
	int *ptr=&var;
	int &ref=var;
	cout<<"var\t"<<&var<<"\t"<<var<<endl;
	cout<<"ptr\t"<<&ptr<<"\t"<<ptr<<endl;
	cout<<"*ptr\t"<<&*ptr<<"\t"<<*ptr<<endl;
	cout<<"ref\t"<<&ref<<"\t"<<ref<<endl;
	return 0;
}

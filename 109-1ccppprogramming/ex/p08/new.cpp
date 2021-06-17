#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int *p;
	p=new int(99);
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl;
	*p=100;
	cout<<"p = "<<p<<endl;
	cout<<"*p = "<<*p<<endl;
	delete p;
	return 0;
}

#include "square.h"
#include <iostream>
using namespace std;
Square::Square()
{
	len=0;
}
Square::Square(int n)
{
	if(n<1){
		cout<<"len setting error\n";
		len=1;
	}
	else{
		len=n;
	}
}
int Square::area()
{
	return len*len;
}
int Square::getLen()
{
	return len;
}
void Square::setLen(int n)
{
	if(n<1){
		cout<<"len setting error\n";
		len=1;
	}
	else{
		len=n;
	}
}

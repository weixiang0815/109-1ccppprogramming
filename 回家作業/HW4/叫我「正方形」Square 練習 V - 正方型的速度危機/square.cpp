#include<iostream>
#include "square.h"
using namespace std;
Square::Square()
{
	len=0;
}
Square::Square(int n)
{
	setLen(n);
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
int cmpSquare(Square &q1, Square &q2){
	if(q1.area()>q2.area()){
		return 1;
	}
	else if(q1.area()<q2.area()){
		return -1;
	}
	else{
		return 0;
	}
}

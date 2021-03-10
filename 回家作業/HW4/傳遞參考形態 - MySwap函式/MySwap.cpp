#include"MySwap.h"
#include<iostream>
using namespace std;
void MySwap(int &n,int &m){
	int temp;
	temp=n;
	n=m;
	m=temp;
}

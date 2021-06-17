#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
using namespace std;
int main(int argc, char** argv) {
	int *p;
	int n;
	cin>>n;
	p=new int[n];
	memset(p,0,sizeof(int)*n);
	for(int i=0;i<n;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
	delete p;
	return 0;
}

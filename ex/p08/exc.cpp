#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int *p=new int[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(p[i]>p[i+1]){
				int temp=p[i];
				p[i]=p[i+1];
				p[i+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
	delete []p;
	return 0;
}

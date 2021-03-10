#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	string *p=new string[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(p[j]>p[j+1]){
				string temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
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

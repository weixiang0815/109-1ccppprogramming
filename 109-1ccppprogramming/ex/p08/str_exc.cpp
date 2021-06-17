#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char** argv) {
	string s1,s2;
	char ch[100]="banana";
	s1="apple";
	s2=ch;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cin>>s2;
	if(s1==s2){
		cout<<"s1==s2"<<endl;
	}
	else if(s1>s2){
		cout<<"s1>s2"<<endl;
	}
	else{
		cout<<"s1<s2"<<endl;
	}
	strcpy(ch,s2.c_str());
	cout<<ch<<endl;
	return 0;
}

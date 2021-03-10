#include<iostream>
#include<string>
using namespace std;
int checkName(string n1,string n2){
	int i;
	for(i=0;i<n1.length();i++){
		if(n1[i]>='A'&&n1[i]<='Z'){
			n1[i]+=32;
		}
	}
	for(i=0;i<n2.length();i++){
		if(n2[i]>='A'&&n2[i]<='Z'){
			n2[i]+=32;
		}
	}
	if(n1>n2){
		return 1;
	}
	else if(n1==n2){
		return 0;
	}
	else{
		return -1;
	}
}
void swap(string &n1,string &n2){
	string temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main(){
	int n;
	cin>>n;
	string *s=new string[n];
	int i;
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	int j;
	for(i=0;i<n;i++){
		bool changed=false;
		for(j=0;j<n-1;j++){
			if(checkName(s[j],s[j+1])>0){
				swap(s[j],s[j+1]);
				changed=true;
			}
		}
		if(changed==false){
			break;
		}
	}
	for(i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;
	delete[] s;
	return 0;
}

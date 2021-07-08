#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		for(int j=0;j<s.length()-1;j++){
			if(s[j]>s[j+1]){
				char key = s[j];
				s[j]=s[j+1];
				s[j+1]=key;
			}
		}
	}
	int count = 1;
	for(int i=0;i<s.length()-1;i++){
		if(s[i]!=s[i+1]){
			count++;
		}
	}
	if(count%2==0){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}
	return 0;
}

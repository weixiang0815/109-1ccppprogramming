#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	string numbers = "";
	for(int i=0;i<s.length();i++){
		if(s[i]!='+'){
			numbers+=s[i];
		}
	}
	for(int i=0;i<numbers.length();i++){
		for(int j=0;j<numbers.length()-1;j++){
			if(numbers[j]>numbers[j+1]){
				int key=numbers[j];
				numbers[j]=numbers[j+1];
				numbers[j+1]=key;
			}
		}
	}
	for(int i=0;i<numbers.length();i++){
		cout<<numbers[i];
		if(i!=numbers.length()-1){
			cout<<'+';
		}
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count_A = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='A'){
			count_A++;
		}
	}
	if(count_A>s.length()-count_A){
		cout << "Anton";
	}
	else if(count_A<s.length()-count_A){
		cout << "Danik";
	}
	else{
		cout << "Friendship";
	}
	return 0;
}

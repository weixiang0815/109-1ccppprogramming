#include<iostream>
using namespace std;
int main(){
	string s, t;
	cin >> s >> t;
	string re_s = "";
	for(int i=s.length()-1;i>=0;i--){
		re_s += s[i];
	}
	if(re_s==t){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}

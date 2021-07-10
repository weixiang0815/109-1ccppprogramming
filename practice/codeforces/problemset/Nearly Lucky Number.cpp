#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int count = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='4'||s[i]=='7'){
			count++;
		}
	}
	string n = to_string(count);
	bool flag = false;
	for(int i=0;i<n.length();i++){
		if(n[i]!='4'&&n[i]!='7'){
			flag = true;
			break;
		}
	}
	if(!flag){
		cout << "YES";
	}
	else{
		cout <<	"NO";
	}
	return 0;
}

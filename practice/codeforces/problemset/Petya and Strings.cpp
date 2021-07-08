#include<iostream>
#include<string>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	bool flag = false;
	for(int i = 0; i < a.length(); i++){
		if(a[i] >= 'a' && a[i] <= 'z'){
			a[i] -= 32;
		}
		if(b[i] >= 'a' && b[i] <= 'z'){
			b[i] -= 32;
		}
		if(a[i] > b[i]){
			cout << '1';
			flag = true;
			break;
		}
		else if(a[i] < b[i]){
			cout << "-1";
			flag = true;
			break;
		}
	}
	if(flag == false){
		cout << '0';
	}
	return 0;
}

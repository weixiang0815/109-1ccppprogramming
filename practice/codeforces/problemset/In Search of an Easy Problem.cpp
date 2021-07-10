#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	bool flag = false;
	int p;
	for(int i = 0; i < n; i ++){
		cin >> p;
		if(p == 1){
			flag = true;
		}
	}
	if(!flag){
		cout << "EASY";
	}
	else{
		cout << "HARD";
	}
	return 0;
}

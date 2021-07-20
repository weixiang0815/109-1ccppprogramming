#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	bool *levels = new bool[n];
	for(int i = 0; i < n; i++){
		levels[i] = false;
	}
	int p, a;
	for(int i = 0; i < 2 ; i++){
		cin >> p;
		for(int j = 0; j < p; j++){
			cin >> a;
			if(!levels[a-1]){
				levels[a-1] = true;
			}
		}
	}
	bool flag = true;
	for(int i = 0; i < n; i++){
		if(!levels[i]){
			flag = false;
			break;
		}
	}
	delete []levels;
	if(!flag){
		cout << "Oh, my keyboard!";
	}
	else{
		cout << "I become the guy.";
	}
	return 0;
}

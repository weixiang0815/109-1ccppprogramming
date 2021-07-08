#include<iostream>
#include<string>
using namespace std;
int main(){
	int x = 0;
	int n;
	cin >> n;
	string key;
	for(int i = 0; i < n; i++){
		cin >> key;
		if(key[0] == 'X'){
			if(key[1] == '+'){
				x++;
			}
			else{
				x--;
			}
		}
		else{
			if(key[1] == '+'){
				++x;
			}
			else{
				--x;
			}
		}
		key.clear();
	}
	cout << x;
	return 0;
}

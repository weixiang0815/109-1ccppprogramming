#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int count = 0;
	for(int i = 0; i < n; i++){
		int key;
		int num_0 = 0;
		for(int j = 0; j < 3; j++){
			cin >> key;
			if(key == 0){
				num_0++;
			}
		}
		if(num_0 <= 1){
			count++;
		}
	}
	cout << count;
	return 0;
}

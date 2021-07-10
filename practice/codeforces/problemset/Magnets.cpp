#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int *mag = new int[n];
	int count = 0;
	for(int i = 0; i < n; i++){
		cin >> mag[i];
		if(i > 0){
			if(mag[i] != mag[i-1]){
				count++;
			}
		}
	}
	delete []mag;
	count++;
	cout << count;
	return 0;
}

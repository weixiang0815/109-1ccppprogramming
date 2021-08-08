#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int *h = new int[n];
	int *a = new int[n];
	for(int i = 0; i < n; i++){
		cin >> h[i] >> a[i];
	}
	int games = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				continue;
			}
			if(h[i] == a[j]){
				games++;
			}
		}
	}
	delete []h;
	delete []a;
	cout << games;
	return 0;
}

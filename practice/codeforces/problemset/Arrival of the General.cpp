#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int sec = 0;
	int max_pos = 0;
	for(int i = 1; i < n; i++){
		if(a[i]>a[max_pos]){
			max_pos = i;
		}
	}
	sec += max_pos;
	for(int i = max_pos; i > 0; i--){
		int temp = a[i];
		a[i] = a[i-1];
		a[i-1] = temp;
	}
	int min_pos = 1;
	for(int i = 2; i < n; i++){
		if(a[i]<=a[min_pos]){
			min_pos = i;
		}
	}
	sec += n-1-min_pos;
	delete []a;
	cout << sec;
	return 0;
}

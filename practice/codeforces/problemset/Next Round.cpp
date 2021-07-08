#include<iostream>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int *a = new int[n];
	int count = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] < a[k-1]){
			break;
		}
		else{
			if(a[i] == 0){
				break;
			}
			else{
				count++;
			}
		}
	}
	delete []a;
	cout << count;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int i;
	cin >> i;
	for(int j=0; j<i; j++){
		int n;
		cin >> n;
		int *set = new int(n*2);
		for(int k=0; k<n*2; k++){
			cin >> set[k];
		}
		int flag=0;
		for(int k=0; k<n*2; k++){
			if(set[k]%2==0){
				flag++;
			}
			else{
				flag--;
			}
		}
		delete(set);
		if(flag==0){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}
	return 0;
}

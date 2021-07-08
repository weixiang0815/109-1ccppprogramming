#include<iostream>
using namespace std;
int main(){
	int matrix[5][5];
	int moves = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> matrix[i][j];
			if(matrix[i][j] == 1){
				if(i<2){
					moves += 2-i;
				}
				else{
					moves += i-2;
				}
				if(j<2){
					moves += 2-j;
				}
				else{
					moves += j-2;
				}
			}
		}
	}
	cout << moves;
	return 0;
}

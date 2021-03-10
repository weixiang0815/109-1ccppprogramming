#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *num=new int[n];
	int i;
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	int j;
	for(i=0;i<n;i++){
		bool changed=false;
		for(j=0;j<n-1;j++){
			if(num[j]>num[j+1]){
				int temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
				changed=true;
			}
		}
		if(changed==false){
			break;
		}
	}
	for(i=0;i<n;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
	delete[] num;
	return 0;
}

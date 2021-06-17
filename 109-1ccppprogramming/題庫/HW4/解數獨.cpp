#include<bits/stdc++.h>
using namespace std;
bool solved=false;
class point{
	public:
	int x;
	int y;
	point(int a,int b){
		x=a;
		y=b;
	}
};
//檢查同行，同列，同區域內是否含有此數 
bool check(int a[9][9],int i,int j,int k){
	for(int x = 0;x<=8;x++){
	 	if(a[x][j]==k){
	 		return false;
		}
	}
	for(int x = 0;x<=8;x++){
	 	if(a[i][x]==k){
	 		return false;
		}
	}
	for(int p=(i/3)*3;p<(i/3)*3+3;p++){
		for(int q=(j/3)*3;q<(j/3)*3+3;q++){
			if(a[p][q]==k){
				return false;
			}	
		}
	}
	return true;
}
void out(int a[9][9]){
	cout<<"Solved Successfully!\n";
	for(int i=0;i<9;i++){
		if(i%3==0){
			cout<<"---------------------\n";
		}
		for(int j=0;j<9;j++){
			if(j==3||j==6){
				cout<<"| ";
			}
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"---------------------\n";
	solved=true;
}
void solve(int a[9][9],vector<point> &v,int cur){
	if(cur==v.size()){
		out(a);
		return;
	}
	for(int k=1;k<=9;k++){
		if(check(a,v[cur].x,v[cur].y,k)){
			a[v[cur].x][v[cur].y]=k;
			solve(a,v,cur+1);
			a[v[cur].x][v[cur].y]=0;
		}
	}
	return;
}
int main(){
	int a[9][9];
	vector<point> v; //記錄要填空的座標 
	
	for(int i=0;i<9;i++){
		for(int j =0;j<9;j++){
			scanf("%1d",&a[i][j]);
			if(a[i][j]==0){
				point p = point(i,j);
				v.push_back(p);
			}
		}
	} 
	solve(a,v,0);
	if(!solved){
		cout<<"No answer";
	}
	return 0;
}

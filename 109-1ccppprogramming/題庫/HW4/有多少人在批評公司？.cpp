#include<bits/stdc++.h>
using namespace std;
typedef class staff{
public:
	staff(){
		a = b = c = 0;
		complain = false;
		checked = false;
	}
	int a; //位階
	int b; //嘴巴砲火指數
	int c; //防禦指數
	bool complain;
	bool checked;
}st;
int main(){
	int n;
	cin >> n;
	st p[n];
	int i;
	for(i=0;i<n;i++){
		cin >> p[i].a >> p[i].b >> p[i].c;
	}
	int first;
	cin >> first;
	p[first-1].complain = true;
	int num;
	while(1){
		num=0;
		int cmp[n],m=0;
		for(i=0;i<n;i++){
			if(p[i].complain==true){
				cmp[num]=i;
				num++;
				m++;
			}
		}
		bool changed = false;
		for(i=0;i<m;i++){
			if(p[cmp[i]].checked==true){
				continue;
			}
			for(int j=0;j<n;j++){
				if(p[cmp[i]].a<p[j].a){
					continue;
				}
				else{
					if(p[cmp[i]].b<p[j].c){
						continue;
					}
					else{
						if(p[j].checked==true){
							continue;
						}
						p[j].complain=true;
						cmp[num]=j;
						num++;
						changed=true;
					}
				}
			}
			p[cmp[i]].checked=true;
		}
		if(changed==false){
			break;
		}
	}
	cout<<num;
	return 0;
}

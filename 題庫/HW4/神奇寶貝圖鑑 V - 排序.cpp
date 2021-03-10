#include<iostream>
#include<string>
using namespace std;
typedef struct Pokemon{
	string Name;
	int Lv;
	int Hp;
}pok;
int checkName(string n1,string n2){
	int i;
	for(i=0;i<n1.length();i++){
		if(n1[i]>='A'&&n1[i]<='Z'){
			n1[i]+=32;
		}
	}
	for(i=0;i<n2.length();i++){
		if(n2[i]>='A'&&n2[i]<='Z'){
			n2[i]+=32;
		}
	}
	if(n1>n2){
		return 1;
	}
	else if(n1==n2){
		return 0;
	}
	else{
		return -1;
	}
}
void swap(pok &p1,pok &p2){
	pok temp;
	temp=p1;
	p1=p2;
	p2=temp;
}
int main(){
	int n;
	cin>>n;
	pok *p=new pok[n];
	int i;
	for(i=0;i<n;i++){
		cin>>p[i].Name>>p[i].Lv>>p[i].Hp;
	}
	int m;
	cin>>m;
	int j;
	switch(m){
		case 0:
			break;
		case 1:
			for(i=0;i<n;i++){
				for(j=0;j<n-1;j++){
					if(checkName(p[j].Name,p[j+1].Name)>0){
						swap(p[j],p[j+1]);
					}
				}
			}
			break;
		case 2:
			for(i=0;i<n;i++){
				for(j=0;j<n-1;j++){
					if(p[j].Lv>p[j+1].Lv){
						swap(p[j],p[j+1]);
					}
				}
			}
			break;
		case 3:
			for(i=0;i<n;i++){
				for(j=0;j<n-1;j++){
					if(p[j].Hp>p[j+1].Hp){
						swap(p[j],p[j+1]);
					}
				}
			}
			break;
	}
	for(i=0;i<n;i++){
		cout<<"Name: "<<p[i].Name<<endl;
		cout<<"Lv: "<<p[i].Lv<<endl;
		cout<<"HP: "<<p[i].Hp<<"\n\n";
	}
	delete[] p;
	return 0;
}

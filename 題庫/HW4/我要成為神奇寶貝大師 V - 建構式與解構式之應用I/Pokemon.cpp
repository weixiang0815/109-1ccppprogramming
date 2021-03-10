#include"bits/stdc++.h"
#include"Pokemon.h"
using namespace std;
Pokemon::Pokemon(){
	Name="No Name";
	Lv=1;
	HpMax=HpCur=1;
	items=new string[Lv];
	itemNum=0;
}
Pokemon::Pokemon(string na, int lv, int hp){
	setData(na,lv,hp);
	items=new string[Lv];
	itemNum=0;
}
Pokemon::~Pokemon(){
	delete[] items;
	cout<<Name<<" has returned to the nature."<<endl;
}
void Pokemon::addItem(string item){
	if(itemNum==Lv){
		cout<<Name<<" is full, cannot carry "<<item<<".\n";
	}
	else{
		items[itemNum]=item;
		itemNum++;
	}
}
void Pokemon::ShowInfo(){
	cout<<"Name: "<<Name<<endl;
	cout<<"Lv: "<<Lv<<endl;
	cout<<"HP: "<<HpCur<<"/"<<HpMax<<endl;
	cout<<"Items: ";
	for(int i=0;i<itemNum;i++){
		cout<<items[i]<<" ";
	}
	cout<<"\n\n";
}
void Pokemon::setData(string na, int lv, int hp){
	if(na==""){
		cout<<"Name can't be empty."<<endl;
		Name="No Name";
	}
	else{
		bool correct=false;
		for(int i=0;i<na.length();i++){
			if(na[i]>='a'&&na[i]<='z'){
				correct=true;
				break;
			}
			else if(na[i]>='A'&&na[i]<='Z'){
				correct=true;
				break;
			}
		}
		if(correct==true){
			Name=na;
		}
		else{
			cout<<"Name can't be empty."<<endl;
			Name="No Name";
		}
	}
	if(lv<1){
		cout<<"Lv setting error."<<endl;
		Lv=1;
	}
	else{
		Lv=lv;
	}
	if(hp<1){
		cout<<"Hp setting error."<<endl;
		HpMax=HpCur=1;
	}
	else{
		HpMax=HpCur=hp;
	}
}

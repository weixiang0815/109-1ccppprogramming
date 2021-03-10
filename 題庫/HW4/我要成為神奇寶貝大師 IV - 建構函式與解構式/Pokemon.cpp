#include<iostream>
#include"Pokemon.h"
using namespace std;
Pokemon::Pokemon(){
	Name="No Name";
	Lv=1;
	HpCur=HpMax=1;
}
Pokemon::Pokemon(string name, int lv, int hp){
	setData(name,lv,hp);
}
Pokemon::~Pokemon(){
	cout<<Name<<" has returned to the nature.\n";
}
void Pokemon::ShowInfo(){
	cout<<"Name: "<<Name<<endl;
	cout<<"Lv: "<<Lv<<endl;
	cout<<"HP: "<<HpCur<<"/"<<HpMax<<"\n\n";
}
void Pokemon::Attack(Pokemon &Target){
}
void Pokemon::Defence( int n ){
}
void Pokemon::Cure(){
	HpCur=HpMax;
}
void Pokemon::setData(string name, int lv, int hp){
	int i,flag=0;
	for(i=0;i<name.length();i++){
		if(name[i]>='a'&&name[i]<='z'){
			continue;
		}
		else if(name[i]>='A'&&name[i]<='Z'){
			continue;
		}
		else if(name[i]>='0'&&name[i]<='9'){
			continue;
		}
		else{
			flag++;
		}
	}
	if(flag!=0){
		cout<<"Name can't be empty.\n";
		Name="No Name";
	}
	else{
		Name=name;
	}
	if(lv<1){
		cout<<"Lv setting error.\n";
		Lv=1;
	}
	else{
		Lv=lv;
	}
	if(hp<1){
		cout<<"Hp setting error.\n";
		HpCur=HpMax=1;
	}
	else{
		HpCur=HpMax=hp;
	}
}

#include<iostream>
#include"Pokemon.h"
#include<string>
using namespace std;
void Pokemon::ShowInfo(){
	cout<<"Name: "<<Name<<endl;
	cout<<"Lv: "<<Lv<<endl;
	cout<<"HP: "<<HpCur<<"/"<<HpMax<<"\n\n";
}
void Pokemon::Attack(Pokemon &Target){
	if(Target.HpCur!=0&&HpCur!=0){
		cout<<Name<<" Attack "<<Target.Name<<" "<<Lv<<" Points.\n";
		Target.Defence(Lv);
	}
	else if(HpCur==0){
		cout<<Name<<" is unable to attack.\n";
	}
	else if(Target.HpCur==0){
		cout<<Name<<" cannot attack fainted target "<<Target.Name<<".\n";
	}
}
void Pokemon::Defence(int n){
	HpCur-=n;
	if(HpCur<=0){
		cout<<Name<<" is fainted.\n";
		HpCur=0;
	}
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

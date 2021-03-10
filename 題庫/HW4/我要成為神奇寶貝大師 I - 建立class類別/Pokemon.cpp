#include"Pokemon.h"
#include<iostream>
using namespace std;
void Pokemon::ShowInfo()
{
    cout<<"Name: "<<Name<<endl;
    cout<<"Lv: "<<Lv<<endl;
    cout<<"HP: "<<HpCur<<"/"<<HpMax<<"\n\n";
}

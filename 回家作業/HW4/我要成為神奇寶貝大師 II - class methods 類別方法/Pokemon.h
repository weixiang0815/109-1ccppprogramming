#ifndef POKEMON_H
#define POKEMON_H
#include<iostream>
using namespace std;
class Pokemon
{
  public:
    void ShowInfo();
    void Attack(Pokemon &Target);
    void Defence( int atkp );
    void Cure();
    string Name;
    int Lv;
    int HpMax;
    int HpCur;
};
#endif

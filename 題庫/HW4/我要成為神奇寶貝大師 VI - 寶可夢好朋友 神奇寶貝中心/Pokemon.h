#ifndef POKEMON_H
#define POKEMON_H 
#include<bits/stdc++.h>
using namespace std;
class Pokemon
{
public:
    Pokemon();
    Pokemon(string na, int lv, int hp);
    void ShowInfo();
    void Attack(Pokemon &Target);// ����
    void Defence( int atkp );// ���s(�Q�����H)
    void Cure();// �v¡
	friend class PokemonHealthCenter;
private:
    void setData(string name, int lv, int hp);
    string Name;
    int Lv;
    int HpMax;
    int HpCur;       
};
typedef class PokemonHealthCenter
{
public:
    PokemonHealthCenter(string na);
    //�]�w���_�_�����ߪ��W�r
    void Cure(Pokemon &p);
    //�N�ǤJ�����_�_���^�_����
    //�æL�X�b�uxx���_�_�����ߡv��_
private:
    string Name;
}PC;
#endif

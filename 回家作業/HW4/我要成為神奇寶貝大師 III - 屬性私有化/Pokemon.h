#ifndef POKEMON_H
#define POKEMON_H
using namespace std;
class Pokemon
{
public:
    void ShowInfo();
    void Attack(Pokemon &Target);
    void Defence( int n );
    void Cure();
    void setData(string name, int lv, int hp);
private:
	string Name;
	int Lv;
	int HpMax;
	int HpCur;
};
#endif

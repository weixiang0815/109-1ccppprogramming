#include<iostream>
#include<string>
using namespace std;
struct Person{
	string name;
	int height;
	int weight;
};
typedef struct Person person;
void show(int a){
	cout<<"int a="<<a<<endl;
}
void show(int a,int b){
	cout<<"int a="<<a<<", int b="<<b<<endl;
}
void show(double a){
	cout<<"double a="<<a<<endl;
}
void show(person &sp){
	cout<<"Name: "<<sp.name<<endl;
	cout<<"Height: "<<sp.height<<endl;
	cout<<"Weight: "<<sp.weight<<endl;
}
void show(person *sp){
	cout<<"Name: "<<sp->name<<endl;
	cout<<"Height: "<<sp->height<<endl;
	cout<<"Weight: "<<(*sp).weight<<endl;
}
int main(){
	person p;
	cin>>p.name>>p.height>>p.weight;
	show(p);
	show(&p);
	return 0;
}

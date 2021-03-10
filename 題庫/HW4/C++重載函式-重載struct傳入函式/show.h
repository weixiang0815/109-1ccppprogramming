#ifndef SHOW_H
#define SHOW_H
#include<iostream>
using namespace std;
struct Person
{
    string name;
    int height;
    int weight;
};
 
void show(int x);
void show(double x);
void show(int x, int y);
void show(struct Person p);
 
#endif

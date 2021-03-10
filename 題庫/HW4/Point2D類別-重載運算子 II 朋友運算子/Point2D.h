#ifndef POINT2D_H
#define POINT2D_H
#include<bits/stdc++.h>
using namespace std;
class Point2D
{
public:    
    Point2D();   
    Point2D(int x, int y);   
    int getX();
    int getY();
    Point2D operator+(Point2D &p); // 更+笲衡    
    Point2D operator-(Point2D &p); // 更-笲衡
    Point2D operator*(Point2D &p); //更猭
    friend Point2D operator+(Point2D &p,int n); //friend 更+笲衡 xのy禸计
    friend Point2D operator+(int n,Point2D &p); //friend 更+笲衡 计xのy禸
private:
    int X;   
    int Y;
};
#endif

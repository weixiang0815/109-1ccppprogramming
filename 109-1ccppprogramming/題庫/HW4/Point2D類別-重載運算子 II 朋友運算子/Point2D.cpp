#include "Point2D.h"
#include<bits/stdc++.h>
using namespace std;
Point2D::Point2D()
{   
    X = 0;  
    Y = 0;
}
Point2D::Point2D(int x, int y)
{   
    X = x;   
    Y = y;
}
int Point2D::getX()
{
    return X;
}
int Point2D::getY()
{
    return Y;
}
Point2D Point2D::operator+(Point2D &p)
{
    int x = X + p.X;
    int y = Y + p.Y;
    Point2D tmp(x, y);    
    return tmp;
}
Point2D Point2D::operator-(Point2D &p)
{    
    int x = X - p.X;
    int y = Y - p.Y;
    Point2D tmp(x, y);      
    return tmp;
}
Point2D Point2D::operator*(Point2D &p){
	int x=X*p.X;
	int y=Y*p.Y;
	Point2D tmp(x,y);
	return tmp;
}	//更猭
Point2D operator+(Point2D &p,int n){
	int x=p.X+n;
	int y=p.Y+n;
	Point2D tmp(x,y);
	return tmp;
}		//friend 更+笲衡 xのy禸计
Point2D operator+(int n,Point2D &p){
	int x=n+p.X;
	int y=n+p.Y;
	Point2D tmp(x,y);
	return tmp;
}		//friend 更+笲衡 计xのy禸

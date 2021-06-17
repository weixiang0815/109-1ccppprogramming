#include "Point2D.h"
#include <iostream>
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
Point2D Point2D::operator*(Point2D &p)
{    
    int x = X * p.X;
    int y = Y * p.Y;
    Point2D tmp(x, y);      
    return tmp;
}
Point2D Point2D::operator+(int n)
{    
    int x = X + n;
    int y = Y + n;
    Point2D tmp(x, y);      
    return tmp;
}

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
    Point2D operator+(Point2D &p); // ����+�B��l    
    Point2D operator-(Point2D &p); // ����-�B��l
    Point2D operator*(Point2D &p); //�������k
    friend Point2D operator+(Point2D &p,int n); //friend ����+�B��l �Ox��y�b�U�[�W�@�Ʀr
    friend Point2D operator+(int n,Point2D &p); //friend ����+�B��l �O�@�Ʀr�[�Wx��y�b
private:
    int X;   
    int Y;
};
#endif

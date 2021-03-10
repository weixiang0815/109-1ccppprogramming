#ifndef POINT2D_H
#define POINT2D_H
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
            Point2D operator+(int n); //����+�B��l �Ox��y�b�U�[�W�@�Ʀr
      private:   
            int X;   
            int Y;
};
#endif

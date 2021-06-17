#include<iostream>
using namespace std;
class Point2D{
public:
	Point2D(){
		X=0;
		Y=0;
	}
	Point2D(int inX,int inY){
		X=inX;
		Y=inY;
	}
	void show2D(){
		cout<<"X: "<<X<<endl;
		cout<<"Y: "<<Y<<endl;
	}
	void show2D2(){
		cout<<"X="<<X;
		cout<<", Y="<<Y;
	}
	//Point2D adder(Point2D &in)
	Point2D operator+(Point2D &in){
		int rX=X+in.X;
		int rY=Y+in.Y;
		Point2D Result(rX,rY);
		return Result;
	}
	Point2D operator+(int in){
		int rX=X+in;
		int rY=Y+in;
		Point2D Result(rX,rY);
		return Result;
	}
	Point2D operator-(Point2D &in){
		int rX=X-in.X;
		int rY=Y-in.Y;
		Point2D Result(rX,rY);
		return Result;
	}
	Point2D operator*(Point2D &in){
		int rX=X*in.X;
		int rY=Y*in.Y;
		Point2D Result(rX,rY);
		return Result;
	}
private:
	int X;
	int Y;
};
class Point3D: public Point2D{
	public:
		Point3D(){
			Z=0;
		}
		Point3D(int inX,int inY,int inZ):Point2D(inX,inY){
			Z=inZ;
		}
		void show3D(){
			show2D();
			cout<<"Z: "<<Z<<endl;
		}
	private:
		int Z;
};
int main(){
	Point2D p2d1(3,4),p2d2(10,20);
	cout<<"P2d1:\n";
	p2d1.show2D();
	cout<<"P2d2:\n";
	p2d2.show2D();
	Point3D p3d1,p3d2(11,22,33);
	cout<<"P3d1:\n";
	p3d1.show3D();
	cout<<"P3d2:\n";
	p3d2.show3D();
	return 0;
}

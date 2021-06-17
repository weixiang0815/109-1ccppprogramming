#include<iostream>
using namespace std;
class Point1D{
public:
	Point1D(){
		X=0;
	}
	Point1D(int inX){
		X=inX;
	}
	void show1D(){
		cout<<"X: "<<X<<endl;
	}
	void show1D2(){
		cout<<"X="<<X;
	}
private:
	int X;
};
class Point2D: private Point1D{
public:
	Point2D(){
		Y=0;
	}
	Point2D(int inX,int inY):Point1D(inX){
		Y=inY;
	}
	void show2D(){
		show1D();
		cout<<"Y: "<<Y<<endl;
	}
	void show2D2(){
		show1D2();
		cout<<", Y="<<Y;
	}
private:
	int Y;
};
class Point3D: private Point2D{
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
		void show3D2(){
			show2D2();
			cout<<", Z="<<Z;
		}
	private:
		int Z;
};
int main(){
	Point1D p1d1,p1d2(99);
	cout<<"P1d1:\n";
	p1d1.show1D();
	cout<<"P1d2:\n";
	p1d2.show1D();
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

#include<iostream>
#include<cstdio>
using namespace std;
class student{
public:
	student(){
		Name="name";
		Gender="none";
		num=0;
	}
	student(string name,string gender){
		Name=name;
		Gender=gender;
		num=0;
	}
	void add(int grade){
		Grades[num]=grade;
		num++;
	}
	double avg(){
		int i,sum=0;
		for(i=0;i<num;i++){
			sum+=Grades[i];
		}
		return (double)sum/(num);
	}
	int fcount(){
		int i,count=0;
		for(i=0;i<num;i++){
			if(Grades[i]<60){
				count++;
			}
		}
		return count;
	}
	void show(){
		cout<<"Name: "<<Name<<endl;
		cout<<"Gender: "<<Gender<<endl;
		cout<<"Grades: [";
		int i;
		for(i=0;i<num;i++){
			if(i==num-1){
				cout<<Grades[i]<<"]\n";
			}
			else{
				cout<<Grades[i]<<", ";
			}
		}
		printf("Avg: %.1lf\n",avg());
		cout<<"Fail Number: "<<fcount()<<"\n\n";
	}
	string Name;
	string Gender;
	int Grades[6];
	int num;
};
student top(student &s1,student &s2,student &s3,student &s4,student &s5){
	cout<<"Top Student:\n";
	student top=(s1.avg()>s2.avg())?s1:s2;
	top=(top.avg()>s3.avg())?top:s3;
	top=(top.avg()>s4.avg())?top:s4;
	top=(top.avg()>s5.avg())?top:s5;
	return top;
}
int main(){
	student s1("Tom","M"),s2("Jane","F"),s3("John","M"),s4("Ann","F"),s5("Peter","M");
	s1.add(80);
	s1.add(90);
	s1.add(55);
	s1.add(77);
	s1.add(40);
	s2.add(58);
	s2.add(87);
	s3.add(100);
	s3.add(80);
	s4.add(40);
	s4.add(55);
	s5.add(60);
	s5.add(60);
	s1.show();
	s2.show();
	s3.show();
	s4.show();
	s5.show();
	top(s1,s2,s3,s4,s5).show();
	return 0;
}

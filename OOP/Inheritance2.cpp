#include <iostream>
using namespace std;
class student{
	public:
		student(){
			cout<<"student\n";
		}
		student(int a){
			cout<<"student:"<<a<<"\n";
		}	
};
class staff1: public student{
	public:
//		staff1(){
//			cout<<"staff1\n";
//		}
		staff1():student(50){
			cout<<"staff1\n";
		}
		staff1(int a){
			cout<<"staff1:"<<a<<"\n";
		}
};
class staff2: public staff1{
	public:
		staff2(){
			cout<<"staff2\n";
		}
		staff2(int a){
			cout<<"staff2:"<<a<<"\n";
		}
};
class fa{
	protected:
		string eyecoloer;
	public:
		void seteyecoloer(string eyecoloer){
			this->eyecoloer=eyecoloer;
		}
		string geteyecoloer(){
			return eyecoloer;
		}
};
class ma{
	protected:
		double height;
	public:
		void setheight(double height){
			this->height=height;
		}
		double getheight(){
			return height;
		}
};
class child :public fa,public ma{
	public:
		void show(){
			cout<<"eyecoloer:"<<eyecoloer<<"\nheight:"<<height;
		}
};
int main()
{
staff2 x,x2(9);
cout<<"***********************\n";
staff1 c,c2(5);
cout<<"***********************\n";
child n;
n.seteyecoloer("red");
n.setheight(55);
n.show();
}
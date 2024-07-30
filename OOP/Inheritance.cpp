#include <iostream>
using namespace std;
class student{
	private:
		int pass;
	protected:
		string name;
		void show(){
			cout<<"show\n";
		}
	public:
		void setname(string name){
			this->name=name;
		}
		void setpass(int pass){
			this->pass=pass;
		}
			
		string getname(){
			return name;
		}
			
		int getpass(){
			return pass;
		}
			
};
class staff1: public student{
	public:
	void print(){
		name="jhj";
		cout<<name<<"\n";
	}
	student::name;//Inheritance in public
};
class staff2: protected student{
	public:
	student::name;
	void show(){    //function override
			cout<<"shown\n";
		}
		void print(){
		name="llk";
		cout<<name<<"\n";
	}
};
class staff3: private student{
	
};
int main()
{
student s;
staff1 e(5);//student   staff1
e.setname("hi");
cout<<e.getname()<<"\n";
s.setname("mmm");
e.print();
cout<<s.getname()<<"\n";
cout<<e.name;
staff2 e2;
//error      protected
//e2.setname("hi");
//cout<<e2.getname()<<"\n";
//cout<<e2.name<<"\n";
e2.print();
e2.show();
//staff3 e3;
//error      private
//e2.setname("hi");
//cout<<e2.getname()<<"\n";
//cout<<e.name();
}
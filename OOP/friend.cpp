#include <iostream>
using namespace std;

class rectangle
{
private:
    float length,width;
public:
    void setlength(float len){
        if(len>0)
            length=len;
        else
            cout<<"error";
    }
    void setwidth(float wid){
        if(wid>0)
            width=wid;
        else
            cout<<"error";
    }
    float getlength(){
        return length;
    }
    float getwidth(){
        return width;
    }
    float getarea(){
        return width*length;
    }
	friend void print(rectangle);
};
void print(rectangle r){
	cout<<"length:"<<r.length<<"\nwidth:"<<r.width<<"\n";
}

class emp;
class staff
{
private:
    double salary;
    string name;
public:
    staff():name("hi"),salary(20.2){};
    void setsalary(double salary){
    	this->salary=salary;
	}
	friend void print(staff f, emp e);
};

class emp
{
private:
    double salary;
    string name;
public:
    emp():name("hi"),salary(20.2){};
    void setsalary(double salary){
    	this->salary=salary;
	}
	friend void print(staff f,emp e);
};
void print(staff f,emp e){
	cout<<"total salary:"<<f.salary+e.salary<<"\n";
}

class course
{
private:
    string name;
public:
    course():name("hima"){};
    void setname(string name){
    	this->name=name;
	}
	friend class student;
};

class student
{
private:
    string name;
public:
    student():name("hi"){};
    void setname(string name){
    	this->name=name;
	}
	void print(course c){
		cout<<"course:"<<c.name<<"\nstudent:"<<name;
	}
};
int main()
{
float len,wid;
cout<<"enter length,width\n";
cin>>len>>wid;
rectangle boo;
boo.setlength(len);
boo.setwidth(wid);
cout<<boo.getlength()<<"\n";
cout<<boo.getwidth()<<"\n";
cout<<boo.getarea()<<"\n";
print(boo);
staff s;
emp m;
print(s,m);
student s;
course e;
s.print(e);
}
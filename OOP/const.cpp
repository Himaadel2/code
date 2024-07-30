class Circle
{
private:
    mutable double radius;
public:
    Circle(int r=0){radius=r;};
    double getRadius(){return radius;}
    void edit() const {radius=111;}
};
#include <iostream>
using namespace std;
int main(){
    Circle c1,c2(1);
    cout<<"c1.r= "<<c1.getRadius()<<endl<<"c2.r= "<<c2.getRadius()<<endl;
    c2.edit();
    cout<<"After edit c2 "<<c2.getRadius();
}
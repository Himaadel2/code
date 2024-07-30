#include <iostream>
using namespace std;
class rectangle
{
private:
    float length,width;
public:
    // rectangle(){
    //     cout<<"welcome\n";
    // }
    rectangle():length(5),width(6){
        cout<<"welcome\n";
        }
    rectangle(float l,float w):length(l),width(w){}
    ~rectangle(){
        cout<<"end\n";
    }
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

};

int main()
{
float len,wid;
cout<<"enter length,width\n";
cin>>len>>wid;
rectangle boo,boo1(6,5);
rectangle boo2(boo1);//copy constructor
rectangle boo3(len,wid);//copy constructor
rectangle boo4=boo3;//copy constructor
boo.setlength(len);
boo.setwidth(wid);
cout<<boo.getlength()<<"\n";
cout<<boo.getwidth()<<"\n";
cout<<boo.getarea();
cout<<"\n=======================\n";
cout<<"enter length,width\n";
cin>>len>>wid;
boo1.setlength(len);
boo1.setwidth(wid);
cout<<boo1.getlength()<<"\n";
cout<<boo1.getwidth()<<"\n";
cout<<boo1.getarea();
cout<<"\n=======================\n";
cout<<boo2.getlength()<<"\n";
cout<<boo2.getwidth();
cout<<"\n=======================\n";
cout<<boo3.getlength()<<"\n";
cout<<boo3.getwidth();
cout<<"\n=======================\n";
cout<<boo4.getlength()<<"\n";
cout<<boo4.getwidth();
}
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
cout<<boo.getarea();
}
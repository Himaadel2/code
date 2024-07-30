#include <iostream>
using namespace std;
float area(float w,float l){
return .5*w*l;
}
float area(float r){
return r*r*3.14;
}
float area(int w ,int l){
return w*l;
}


int main()
{
    float w,l,r;
    cout << "enter Width,length,radius\n";
    cin >>w>>l>>r;
    int x=w,y=l;
    cout<<"circle:"<<area(r)<<"\ntriangle:"<<area(w,l)<<"\nrectangle:"<<area(x,y);
}
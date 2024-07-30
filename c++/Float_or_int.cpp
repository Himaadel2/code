#include <iostream>
using namespace std;
int main()
{
    float x,y;
    int z;
    cin>>x;
    z=x;
    y=x-z;
    if(y==0)
        cout<<"int "<<z;
    else
        cout<<"float "<<z<<" "<<y;
}
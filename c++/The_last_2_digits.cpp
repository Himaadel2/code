#include <iostream>
using namespace std;
int main()
{
    int x,z,y,n,c;
    cin>>x>>y>>z>>n;
    x%=100;
    y%=100;
    z%=100;
    n%=100;
    c=x*y*z*n;
    if(c%100<=9)
        cout<<0;
    cout<<c%100;
}
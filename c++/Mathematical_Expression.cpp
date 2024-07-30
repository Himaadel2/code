#include <iostream>
using namespace std;
int main()
{
    char y,c;
    int x,z,v,n;
    cin>>x>>y>>z>>c>>v;
    switch (y)
    {
    case '+':
        n=x+z;
        break;
    case '-':
        n=x-z;
        break;
    case '*':
        n=x*z;
        break;
    
    default:
        break;
    }
    if(n==v)
        cout<<"Yes";
    else
        cout<<n;
}
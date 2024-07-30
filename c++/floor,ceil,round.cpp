#include <iostream>
using namespace std;
int main()
{
    int z;
    float x,y,c,v,n;
    cin>>x>>y;
    z=x/y;
    c=x/y;
    v=c;
    n=c-z;
    if(n>=.5)
        v++;
    if(n!=0)
        c++;
    cout<< "floor "<<x<<" / "<<y<<" = "<<z;
    cout<< "\nceil "<<x<<" / "<<y<<" = "<<int(c);
    cout<< "\nround "<<x<<" / "<<y<<" = "<<int(v);
}
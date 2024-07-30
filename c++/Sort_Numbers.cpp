#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x<=y&&x<=z){
        cout<<x<<"\n";
        if(y<=z)
            cout<<y<<"\n"<<z<<"\n\n";
        else
            cout<<z<<"\n"<<y<<"\n\n";
    }
    else if(y<=x&&y<=z){
        cout<<y<<"\n";
        if(x<=z)
            cout<<x<<"\n"<<z<<"\n\n";
        else
            cout<<z<<"\n"<<x<<"\n\n";
    }
    else if(z<=y&&x>=z){
        cout<<z<<"\n";
        if(y<=x)
            cout<<y<<"\n"<<x<<"\n\n";
        else
            cout<<x<<"\n"<<y<<"\n\n";
    }
    cout<<x<<"\n"<<y<<"\n"<<z;

}
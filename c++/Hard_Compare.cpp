#include <iostream>
using namespace std;
int main()
{
    long long x,z,y,n;
    cin>>x>>y>>z>>n;
    if(y*log(x)>n*log(z))
        cout<<"YES";
    else
        cout<<"NO";
}
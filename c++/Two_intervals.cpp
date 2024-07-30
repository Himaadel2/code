#include <iostream>
using namespace std;
int main()
{
    long long x,z,y,n;
    cin>>x>>y>>z>>n;
    if(x<=z&&n>=y&&z<=y)
        cout<<z<<" "<<y;
    else if(x<=z&&y>=n&&z<=y)
        cout<<z<<" "<<n;
    else if(z<=x&&n>=y&&x<=n)
        cout<<x<<" "<<y;
    else if(z<=x&&y>=n&&x<=n)
        cout<<x<<" "<<n;
    else
        cout<<-1;
}
#include <iostream>
using namespace std;
int main() {
char x;
int t,n;
cin>>x>>t;
while(t--)
{
    cin>>n;
    for(int i=0;i<n;i++)
        cout<<x;
    cout<<"\n";
}
}
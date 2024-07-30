#include <iostream>
using namespace std;
int main()
{
int x,c=0,sum=0;
cin>>x;
for(int i=1;i<=x;i++){
    c+=i;
    cout<<c<<"\n";
    sum+=c;
}
cout<<"sum="<<sum;
}
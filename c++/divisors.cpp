#include <iostream>
using namespace std;
int main()
{
int x;
cin>>x;
cout<<"1\n";
for(int i=2;i<x;i++){
    if(x%i==0){
        cout<<i<<"\n";
    }
}
cout<<x;
}
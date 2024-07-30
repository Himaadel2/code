#include <iostream>
using namespace std;
int main (){
int a,b,x;
cin>>a>>b;
if(a<b){
for(int i=0;i<=b-a+1;++i)
x=i;
cout<<x;
}
else
cout<<"0";
}
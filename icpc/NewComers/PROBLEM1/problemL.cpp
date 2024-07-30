#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(b>=c&&a>=c)
cout<<a+b;
else if(c>=b&&b<=a)
cout<<a+c;
else if(c>=a&&b>=a)
cout<<b+c;
}
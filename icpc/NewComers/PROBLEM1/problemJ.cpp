#include<iostream>
using namespace std;
int main(){
int r,g,b,x,y,z;
cin>>r>>g>>b;
x=r*100;
y=g*10;
z=x+y+b;
(z%4==0)?
cout<<"YES":cout<<"NO";
/*
if(z%4==0)
cout<<"YES";
else
cout<<"NO";
*/
}
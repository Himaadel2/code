#include<iostream>
using namespace std;
int main(){
float z,y;
int x;
cin>>z;
x=z;
y=(z-x)*10;
if(y>=0&&y<=2)
cout<<x<<"-";
else if(y>=3&&y<=6)
cout<<x;
else
cout<<x<<"+";
}
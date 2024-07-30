#include<iostream>
using namespace std;
int main(){
int n,x,y,a,z,v;
cin>>n>>a>>x>>y;
z=x;
v=y;
if(n>a){
for(int i=1;i<a;++i)
x=x+z;
for(int i=1;i<n-a;++i)
y=y+v;
n=y+x;
cout<<n;
}
else if(n==a){
for(int i=1;i<a;++i)
x=x+z;
n=x;
cout<<n;
}
else if(n-a<=0){
for(int i=1;i<n;++i)
x=x+z;
n=x;
cout<<n;
}
}
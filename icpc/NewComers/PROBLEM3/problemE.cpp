#include<iostream>
#include<string>
using namespace std;
int main(){
int n,x,c1=0,c2=0;
string s;
cin>>s;
x=s.size();
for(int i=0;i<x;++i){
n=s.at(i);
if(65<=n&&90>=n)
c1++;
else
c2++;
}
for(int i=0;i<x;++i){
n=s.at(i);
if(c1<=c2){
if(65<=n&&90>=n)
n+=32;
s.at(i)=(char)n;
}
else{
if(97<=n&&122>=n)
n-=32;
s.at(i)=(char)n;
}
}
cout<<s;
}
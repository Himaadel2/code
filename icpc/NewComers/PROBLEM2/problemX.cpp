#include <iostream>
using namespace std;
int main(){	
int x,y,t,n,s;
char c;
cin>>t;
for(int i=0;i<t;++i){
x=y=s=0;
cin>>n;
for(int j=0;j<n;++j){
cin>>c;
if(c=='U')
y++;
else if(c=='D')
y--;
else if(c=='R')
x++;
else if(c=='L')
x--;
if(x==1&&y==1)
s++;
}
if(s>0)
cout<<"YES\n";
else
cout<<"NO\n";
}
}
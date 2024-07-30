#include<iostream>
using namespace std;
int main(){
int t,a,b,n,c,l;
cin>>t;
for(int i=0;i<t;++i){
cin>>n>>a>>b;
if(n<=a)
cout<<1<<'\n';
else if(b>=a)
cout<<-1<<'\n';
else{
c=1;
l=0;
while(l<n){
l+=a;
if(l>=n){
cout<<c<<'\n';
break;
}
l-=b;
c++;
}
}
}
}
#include <iostream>
using namespace std;
int main(){
int k,n,time,c=0,c2=0;
cin>>k>>n;
time=240-n;
for(int i=1;i<=k;++i){
c2+=5*i;
if(time>=c2)
c=i;
}
cout<<c;
}
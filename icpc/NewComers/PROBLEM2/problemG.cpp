#include<iostream>
using namespace std;
int main(){
int a,b,d=0,c;
cin>>a>>b>>c;
for(int i=1;i<=b;i++){
c*=i;
if(c>=a&&c<=b){
cout<<c;
--d;
break;
}
else
d=1;
}
if(d==1)
cout<<"-1";
}
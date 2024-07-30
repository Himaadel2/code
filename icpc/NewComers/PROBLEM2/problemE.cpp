#include <iostream>
using namespace std;
int main(){	
int n,x,c=0;
cin>>n;
while(n>0){
int t=0;	
x=n%10;
n=n/10;
for(int i=2;i<x;i++){
if(x%i==0)
t=1;	
}
if(t==0&&x!=0&&x!=1)
c=c+1;
}
cout<<c;
}
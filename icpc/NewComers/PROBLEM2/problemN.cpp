#include <iostream>
using namespace std;
int main (){
long long n;
int k,x;
cin>>n>>k;
for(int i=0;i<k;i++){
x=n%10;	
if(x==0)
n=n/10;	
else if(x>0)
n--;	
}
cout<<n;
}
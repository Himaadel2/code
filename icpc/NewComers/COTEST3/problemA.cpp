#include <iostream>
using namespace std;
int main(){
long long n,k,sum,c=0;
cin>>n>>k;
for(long long i=0;i<k;++i){
cin>>sum;
c+=sum;
}
if(c>n)
cout<<"Easy";
else
cout<<"Hard";
}
#include <iostream>
using namespace std;
int main(){
long long n,x;
cin>>n;
for(int i=0;i<3;++i){
n/=10;
x=n%10;
}
cout<<x;
}
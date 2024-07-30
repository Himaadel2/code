#include <iostream>
using namespace std;
int main(){
long long n,x,y,sum1=0,sum2=0;
cin>>n>>x>>y;
sum1=(n%y)*x;
sum2=(x*n)%y;
cout<<sum1<<" "<<sum2;
}
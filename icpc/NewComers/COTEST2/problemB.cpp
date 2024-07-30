/*
#include <iostream>
using namespace std;
int main(){
long long n,sum=1;
cin>>n;
for(long long i=n;i>=1;i--)
sum*=i;
if(sum%2==0)
cout<<"YES";
else
cout<<"NO";
}//وقت
لو الشرط اكبر من 10^7 يجيب time limit
*/
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
if(n>=2)
cout<<"YES";
else
cout<<"NO";
}
#include <iostream>
using namespace std;
int main() {
long long b,a;
cin>>a>>b;
if((a%b==0)||(b%a==0))
cout<<"YES";
else
cout<<"NO";
}
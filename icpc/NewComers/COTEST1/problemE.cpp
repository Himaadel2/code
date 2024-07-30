#include <iostream>
using namespace std;
int main(){
int t,n,m;
cin>>t;
while(t--){
cin>>n>>m;
if(m<=n/2 && n%2==0)
cout<<"Yes\n";
else
cout<<"No\n";
}
}
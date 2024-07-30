#include <iostream>
#include <string>
using namespace std;
int main(){
int n,x;
cin>>n;
string s;
for(int i=0;i<n;++i){
cin>>s;
x=s.size();
if(x<=10)
cout<<s<<"\n";
else
cout<<s.at(0)<<x-2<<s.at(x-1)<<"\n";
}
}
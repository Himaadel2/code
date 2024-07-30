#include <iostream>
using namespace std;
int main(){	
int t,a,b,c;
cin>>t;
for(int i=0;i<t;++i){
cin>>a>>b>>c;
if((a<b&&b<c)||(c<b&&b<a))
cout<<b<<"\n";
else if((b<a&&a<c)||(c<a&&a<b))
cout<<a<<"\n";
else if((b<c&&c<a)||(a<c&&c<b))
cout<<c<<"\n";
}
}
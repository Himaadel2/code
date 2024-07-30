#include <iostream>
using namespace std;
int main(){	
int t;
string s;
cin>>t;
for(int i=0;i<t;++i){
cin>>s;
if(s=="YES"||s=="yES"||s=="YeS"||s=="YEs"||s=="yes"||s=="Yes"||s=="yEs"||s=="yeS")
cout<<"YES\n";
else
cout<<"NO\n";
}
}
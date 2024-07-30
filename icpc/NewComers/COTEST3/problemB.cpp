#include <iostream>
using namespace std;
int main(){
int a,b,c=0;
cin>>a>>b;
for(int i=1;;i++){
a*=3;
b*=2;
c=i;
if(a>b)
break;
}
cout<<c;
}
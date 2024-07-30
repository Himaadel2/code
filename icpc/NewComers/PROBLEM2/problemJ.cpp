#include <iostream>
#include <cmath>
using namespace std;
int main (){
int z,x,y;
for(int i=1;i<=5;++i){
for(int j=1;j<=5;++j){
cin>>z;
if(z==1){
y=j;
x=i;
}	
}
}
cout<<abs(x-3)+abs(y-3);
}
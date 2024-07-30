/*عدد حركه رقم 1  في المصفوفه الي المنتصف
#include<bits/stdc++.h>
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int v,x,y;
for(int i=1;i<=5;++i){
for(int j=1;j<=5;++j){
cin>>v;
if(v==1){
x=i;
y=j;
}
}
}
cout<<abs(x-3)+abs(y-3);
}
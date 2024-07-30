#include <iostream>
using namespace std;
int main (){
int n,t;
cin>>t;
for(int i=0;i<t;i++){
cin>>n;
int d,y=n,c=0;
while(y){
d=y%10;
y=y/10;
if(d!=0&&n%d==0)	
c++;	
}	
cout<<c<<"\n";
}
}
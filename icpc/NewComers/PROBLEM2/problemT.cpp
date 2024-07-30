#include <iostream>
using namespace std;
int main (){
int n,t;
cin>>t;
for(int i=0;i<t;i++){
int h=1;
cin>>n;
for(int i=1;i<=n;i++){
if(i%2==0)
h++;
else
h=(h*2);
}	
cout<<h<<"\n";	
}
}
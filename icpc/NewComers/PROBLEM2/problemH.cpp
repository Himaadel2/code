#include <iostream>
using namespace std;
int main(){	
int n,c=0;
cin>>n;
for(int i=1;i<=n;i++){
for(int x=1;x<=n;x++){
if(x+i%2!=0)
c=c+1;	
}		
}
cout<<c/4;
}
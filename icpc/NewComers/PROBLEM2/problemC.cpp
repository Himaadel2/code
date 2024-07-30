#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
if(i==1||i==n){
for(int x=1;x<=n;x++)
cout<<"* ";		
}
else{
for(int x=1;x<=n;x++){
if(x==1||x==n)
cout<<"* ";
else
cout<<"  ";	
}	
}
cout<<"\n";
}
}
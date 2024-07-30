//رسوب ونجاح
#include <iostream>
using namespace std;
int main(){
int n,c=0,x;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;++i){
cin>>arr[i];
if(arr[i]<x)
c++;
}
cout<<c;
}
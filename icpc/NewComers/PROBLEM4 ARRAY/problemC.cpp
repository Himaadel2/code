//طباعه اصغر رقم وترتيبه
#include <iostream>
using namespace std;
int main(){
int n,x,z,y=0;
cin>>n;
int arr[n];
for(int i=0;i<n;++i)
	cin>>arr[i];
	x=arr[0];
for(int i=1;i<n;++i){
	if(x>arr[i]){
	x=arr[i];
    z=i+1;
    y=1;
}	
}
if(y==0)
z=1;
cout<<x<<" "<<z;
}
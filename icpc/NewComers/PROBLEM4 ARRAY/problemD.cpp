//طباعه الارقام الاقل من 10 
#include <iostream>
using namespace std;
int main(){
int n,x,z,y=0;
cin>>n;
int arr[n];
for(int i=0;i<n;++i){
	cin>>arr[i];
	if(arr[i]<=10)
		cout<<"A["<<i<<"] = "<<arr[i]<<"\n";
}	
}
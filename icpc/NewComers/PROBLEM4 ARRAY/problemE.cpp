//تبديل العدد الموجب ب1 والسالب ب2 
#include <iostream>
using namespace std;
int main(){
int n,x,z,y=0;
cin>>n;
int arr[n];
for(int i=0;i<n;++i){
	cin>>arr[i];
	if(arr[i]<0)
		cout<<2<<" ";
	else if(arr[i]>0)
	    cout<<1<<" ";
	else
	    cout<<0<<" ";
}	
}
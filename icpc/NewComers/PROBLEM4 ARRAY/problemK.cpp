//ترتيب تصاعدي
#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c=0,x;
cin>>n;
int arr[n];
for(int i=0;i<n;++i)
cin>>arr[i];
for(int i=0;i<n;++i){
for(int j=0;j<n;++j)	
	if(arr[i]<arr[j])
	swap(arr[i],arr[j]);
}
/*حل اخر
sort(arr,arr+n)
*/
for(int i=0;i<n;++i)
cout<<arr[i]<<" ";
}
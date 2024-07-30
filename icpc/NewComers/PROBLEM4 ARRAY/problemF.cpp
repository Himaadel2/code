//  بعطي ارتفاع الحائط وبطبع اقل ارتفاع يستطيع العبور من الحارس بدون ان يراه الارتفاع العادي 1 وعندما ينحني 2
#include <iostream>
using namespace std;
int main(){
int n,x,sum=0;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;++i){
	cin>>arr[i];
	if(arr[i]<=x)
		sum+=1;
	else if(arr[i]>x)
	    sum+=2;
}	
cout<<sum;
}
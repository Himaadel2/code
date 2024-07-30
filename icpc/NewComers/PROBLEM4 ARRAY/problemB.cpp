//بحث وطباعه index اذا واجد غير كدا طباعه -1
#include <iostream>
using namespace std;
int main(){
int n,x,z=-1;
cin>>n;
int arr[n];
for(int i=0;i<n;++i)
	cin>>arr[i];
	cin>>x;
for(int i=0;i<n;++i){
	if(arr[i]==x){
    	z=i;
		break;
	}
}	
cout<<z;
}
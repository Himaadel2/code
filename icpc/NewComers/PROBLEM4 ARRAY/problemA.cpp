//جمع الاعداد وطباعه القيمه المطلفه لها
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
cin>>n;
long long arr[n],sum=0;
for(int i=0;i<n;++i){
	cin>>arr[i];
	sum+=arr[i];
}
cout<<abs(sum);
}
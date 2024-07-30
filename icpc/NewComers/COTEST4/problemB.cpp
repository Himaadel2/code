//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int n,z,x,sum=0;
cin>>n>>x;
while(n--){
	cin>>z;
if(x>=z)
sum++;
else
sum+=2;
}
cout<<sum;
}
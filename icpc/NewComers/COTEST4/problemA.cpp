//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int n,sum=0,sum2=0;
char z;
cin>>n;
while(n--){
	cin>>z;
	if(z=='A')
	sum++;
	else if(z=='D')
	sum2++;
}
if(sum>sum2)
cout<<"Anton";
else if(sum<sum2)
cout<<"Danik";
else
cout<<"Friendship";
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
for(int i=0; i<t; i++)
{
	int s;
	cin>>s;
	char a[s];
	for(int i=0; i<s; i++)
	{
		cin>>a[i];
	}
	int j=1;
	char a2[s];
	a2[0]=a[0];
	int k;
	for(int i=1; i<s; i++){
			bool f=true;
		for(k=0 ; k<j ; k++)
		{
			 if(a[i]==a2[k])
			{
				f=false;
				break;
			}
		}
		if(f){
			a2[k]=a[i];
				j++;
		}
	}
    cout<<j*2+(s-j)<<"\n";
}
}
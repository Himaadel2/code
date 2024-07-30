#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
for(int i=0; i<t; i++)
{
	int n;
	cin>>n;
	bool flag=true;
	int v1,v2;
	cin>>v1;	
	for(int i=0; i<n-1; i++)
	{
		cin>>v2;
		if( v1>v2 ){
			flag=false;
		}	
		else{
			swap(v1, v2);
		}
	}	
	if(flag)
     cout<<"Yes\n";
	else
     cout<<"No\n";
}	
}
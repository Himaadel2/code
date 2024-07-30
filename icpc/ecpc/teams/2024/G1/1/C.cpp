#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
for(int i=0; i<t; i++)
{
	int n,m;
	cin>>n>>m;
	int match=0;
	int a1[n];
	int a2[n];
	for(int i=0; i<n; i++)
	{
		cin>>a1[i];	
	}
		
		for(int i=0; i<n; i++)
	{
		cin>>a2[i];	
	}
	int f=n;
	for(int i=0; i<n; i++)
	{
		for(int k=0; k<f; k++)
		{
			if(a1[i]==a2[k])
			{
				match++;
				swap(a2[k] , a2[--f]);
				break;	
			}
		}
	}
	cout<<match<<"\n";	
}
}
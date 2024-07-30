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
	int sum=2;
	int j=0;
	char a2[s];
	a2[0]=a[0];
	j++;
	for(int i=1; i<s; i++){
		
		for( int k=0; k<j ; k++)
		{

			
			if(a[i] !=a2[k])
			{
				a2[k+1] =a[i];
				j++;
			}
			
			else if(a[i]==a2[k])
			{
				
				break;
				
			}
		}
		
	}
    int length = sizeof(a2) / sizeof(a2[0]);

cout<<length*2+(s-length);

	// for(int i=0; i<j; i++)
	// {
	// 	cout<<a2[i]<<"\n";
	// }
		
}	
}
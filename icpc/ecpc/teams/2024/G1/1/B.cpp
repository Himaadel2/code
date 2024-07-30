#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0; i<t; i++)
{
	int n;
    int sum=0;
	for(int i=0; i<=6; i++)
	{
	   cin>>n;	
	   sum+=n;
	}
	cout<<sum<<"\n";	
}
}
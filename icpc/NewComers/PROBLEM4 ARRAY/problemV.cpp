#include <iostream>
using namespace std;
int main()
{
    int n,c=0,min,max,v;
    cin>>n>>v;
    min=max=v;
    while(--n){
        cin>>v;
        if(v>max){
        	c++;
        	max=v;
		}
		else if(v<min){
			c++;
        	min=v;
		}
	}
    cout<<c;
}
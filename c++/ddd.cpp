#include <iostream>
using namespace std;
int main()
{
int x,c;
cin>>x;
c=x;
for(int i=1;i<=x;i++){
    for(int k=c-1;k>0;k--)
            cout<<" "; 
    for(int j=i;j>=1;j--){
        cout<<j;
    }
    cout<<"\n";
    c--;
}
}
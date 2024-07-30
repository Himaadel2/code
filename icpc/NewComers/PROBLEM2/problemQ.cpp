#include <iostream>
using namespace std;
int main (){
int n,c1=0,c2=0;
cin>>n;
char arr [n];
for( int i=0;i<n;i++){
cin>>arr [i];	
if (arr [i]=='A')
c1++;
else if (arr [i]=='D')
c2++;	
}
if(c1>c2)
cout<<"Anton";
else if(c1<c2)
cout<<"Danik";
else
cout<<"Friendship";
}
#include<iostream>
using namespace std;
int main(){
char C;
int x;
cin>>C;
x=C;
if(x==122)
C='a';
else{
x=x+1;
C=x;
}
cout<<C;
}
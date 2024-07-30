#include <iostream>
using namespace std;
int main (){
int t,n;
cin>>t;
for(int i=0;i<t;i++){
cin>>n;
char Z='E';
char c;
for(int x=0;x<n;x++){
cin>>c;
if(c=='0'&&Z=='E')
Z='S';
else if(c=='0'&&Z=='S')
Z='W';
else if(c=='0'&&Z=='W')
Z='N';
else if(c=='0'&&Z=='N')
Z='E';
else if(c=='1'&&Z=='E')
Z='N';
else if(c=='1'&&Z=='N')
Z='W';
else if(c=='1'&&Z=='W')
Z='S';
else if(c=='1'&&Z=='S')
Z='E';
}
cout<<Z<<"\n";
}
}
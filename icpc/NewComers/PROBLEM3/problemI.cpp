#include <iostream>
#include<string>
using namespace std;
int main(){
string x,n;
char y;
int z,c1=0;
cin>>x;
z=x.size();
for(int i=0;i<z;++i){
y=x.at(i);
if(y=='-')
c1++;
else if(y=='.'){
cout<<c1;
c1=0;
}
}
cout<<c1;
}//غلط
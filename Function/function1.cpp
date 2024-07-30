#include <iostream>
using namespace std;
string divide(int );
int main(){	
string s;
int y,z;
cin>>y;
cout<<divide(y);
}
string divide(int y){
	string s;
	int z;
z=y/1000;	
if(z%2==0)
s="even";
else
s="odd";
	return s;
}
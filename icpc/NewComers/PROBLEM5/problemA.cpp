#include <iostream>
using namespace std;
int main(){
string s;
cin>>s;
int x=s.size();
for (int i=0;i<x;++i){
	if(s[i]==',')
	cout<<"\n";
	else
	cout<<s[i];
}
}
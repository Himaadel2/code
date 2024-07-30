#include<iostream>
using namespace std;
int main(){
	char s[5000];
	int t,n;
	cin>>t;
	while(t--){
		cin>>n>>s;
	    for(int i=0;i<n;i++){
		if(s[i]=='U')
		cout<<'D';
		else if(s[i]=='D')
		cout<<'U';
		else if(s[i]=='L')
		cout<<'L';
		else if(s[i]=='R')
		cout<<'R';
		}
		cout<<'\n';
	}
}
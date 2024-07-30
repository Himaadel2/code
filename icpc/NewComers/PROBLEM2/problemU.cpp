#include <iostream>
using namespace std;
int main(){
int n;
char s;
cin>>n;
for(int i=0;i<n;i++){
cin>>s;
if(s=='c'||s=='o'||s=='d'||s=='e'||s=='f'||s=='r'||s=='s')
cout<<"YES\n";
else
cout<<"NO\n";	
}
}
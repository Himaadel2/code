/*#include <iostream>
using namespace std;
int main(){
int n,a,b,s;
cin>>n>>a>>b>>s;
if(n!=1){
 if(s<=b*n)
cout<<"YES";
else
cout<<"NO";
}
else{
if(s>a||s>b)
cout<<"NO";
else
cout<<"YES";
}
}//غلط
*/
#include <iostream>
using namespace std;
int main(){
int n,a,b,s;
cin>>n>>a>>b>>s;
if((a*(n-1))+b<=s&&s<=(b*(n-1))+a)
cout<<"YES";
else
cout<<"NO";
}
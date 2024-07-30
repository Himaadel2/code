/*#include <iostream>
using namespace std;
int main(){
int n,sum,conter=0;
cin>>n;
for(int i=0;i<n;++i){
for(int j=0;j<n;++j){
sum=(i*i)+(j*j);	
if(sum==n)
conter++;
}
}
cout<<conter;
}//غلط*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,sum,conter=0;
cin>>n;
//for(int i=0;i*i<=n;++i){//جذر n
// for(int i=0;i<=sqrt(n);++i){
// for(int j=0;j*j<=n;++j){
// sum=(i*i)+(j*j);	
// if(sum==n)
// conter++;
// }
// }
//حل اخر
for(int i=0;i<=sqrt(n);++i){
int x=sqrt(n-i*i);
if (i*i+x*x==n)
conter++;
}
cout<<conter;
}
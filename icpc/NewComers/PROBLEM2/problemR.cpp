#include <iostream>
#include <cmath>
using namespace std;
int main(){	
int n,sum=0,sum2=0,result;
cin>>n;
int matrix[n][n];
for(int i=0;i<n;i++){
for(int x=0;x<n;x++)
cin>>matrix[i][x];		
}
for(int i=0;i<n;i++){
for(int x=0;x<n;x++){
if(x==i)
sum=sum+matrix[i][x];
if(x+i==n-1)
sum2=sum2+matrix[i][x];	
}		
}
result=sum-sum2;
cout<<abs(result);
}
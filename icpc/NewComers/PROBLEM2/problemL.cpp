#include <iostream>
using namespace std;
int main(){	
int n,sum1=0,sum2=0,sum3=0,counter=0;
cin>>n;
int matrix[n][3];
for(int x=0;x<n;x++)
for(int i=0;i<3;i++)
cin>>matrix[x][i];
for(int i=0;i<n;i++)
sum1+=matrix[i][0];
for(int i=0;i<n;i++)
sum2+=matrix[i][1];
for(int i=0;i<n;i++)
sum3+=matrix[i][2];
if(sum1==0&&sum2==0&&sum3==0)
counter++;	
if(counter==1)
cout<<"YES";
else
cout<<"NO";
}
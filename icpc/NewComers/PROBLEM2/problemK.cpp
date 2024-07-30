#include <iostream>
using namespace std;
int main(){
int n,counter=0,sum=0;
cin>>n;
int matrix[n][3];
for(int j=0;j<n;j++){
sum=0;
for(int i=0;i<3;i++){
cin>>matrix[j][i];
sum+=matrix[j][i];
}
if(sum>1)
counter++;
}
cout<<counter;
}
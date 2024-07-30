#include<iostream>
using namespace std;//leap year 366days
bool year(int x){
bool c=0;
if((x%100!=0&&x%4==0)||(x%400==0))
c=1;
return c;
}
int main(){
    int x;
	cin>>x;
    year(x);
    if(year(x)==0)
	cout<<"not leap";
	else
	cout<<"leap";
}
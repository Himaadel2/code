#include <iostream>
using namespace std;
double x,y,z;
double divide(double x,double y){//double divide()
cin>>x>>y;	
if(y!=0){
z=x/y;
cout<<z;	
}
else
cout<<"error";
	return z;
}
int main(){	
divide(x,y);//divide();
assert(x>8);
}
/*
double divide(double x,double y){
cin>>x>>y;	
if(y!=0){
z=x/y;
cout<<z;	
}
else
cout<<"error";
	return z;
}
*/
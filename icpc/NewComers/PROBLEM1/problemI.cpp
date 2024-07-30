#include <iostream>
using namespace std;
int main (){
int X,Y;
cin>>X>>Y;
if((X==1||X==3||X==5||X==7||X==8||X==10||X==12)&&(Y==3||Y==5||Y==7||Y==8||Y==10||Y==12))	
cout<<"Yes";
else if((X==4||X==6||X==9)&&(Y==4||Y==6||Y==9||Y==11))
cout<<"Yes";
else
cout<<"No";
}
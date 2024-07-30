#include <iostream>//z
using namespace std;
int main (){
int t,x1,x2,y1,y2,a,b,time=-1;
char n,d1,d2;
cin>>t>>x1>>y1>>x2>>y2;
if(x1>x2){
a=x1-x2;
d1='W';
}
else{
a=x2-x1;
d1='E';
}
if(y1>y2){
b=y1-y2;
d2='S';
}
else{
b=y2-y1;
d2='N';
}
for(int i=1;i<=t;++i){
cin>>n;
if(a>0&&n==d1)
a--;
if(b>0&&n==d2)
b--;
if(a==0&&b==0){
time=i;
break;
}
}
cout<<time;
}
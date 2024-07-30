#include <iostream>
using namespace std;
int main()
{
  int a=1e6,c,d,x,h ;//y=0===y(0)
  h=6;
  cout<<a<<"\n";
  c=400%365;
  cout<<c<<'\n';
  d=c%30;
  cout<<d<<"\n";
  if(cout<<"hima")//ديما true
  a=10;
  cout<<"\n"<<a;
  if(h)//h!=0
  cout<<"\n"<<h;
  if(!(h==6))
  cout<<"\nfalse";
  else
  cout<<"\ntrue";
  if(a==6&h==3)//& | يفحص الشرط الاول وبعدين يفحص الشرط التاني 
  cout<<"\ntrue";//&&     يفحص الشرط الاول لو غلط مش بيفحص الشرط التاني ومش ينفذ الشرط
  else//|| يفحص الشرط الاول لو صح مش بيفحص الشرط التاني وينفذ الشرط
  cout<<"\nfalse";
  return 0;
}
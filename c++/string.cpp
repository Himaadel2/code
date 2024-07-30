#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s="asfvgb",x,c;
  int z,i,y;

  s+='h';
  s+="ghgbh";
  c=s.substr(1,5);
  getline(cin,s);//لو يوجد مسافه في النص
  //x=s;
  x.assign(s);
  z=s.size();
  i=s.find('a');//indeaxتعطيك بتاعه لو مش موجود يطبع -1
  y=s.find("fv");//indeaxبتاع اول حرف ولو الحرف التاني مش موجود يطبع-1
  cout<<x<<"\n";
  cout<<z<<"\n";
  cout<<i<<"\n"<<y<<"\n"<<c;
}
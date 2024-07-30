#include<iostream>
using namespace std;
string cheak_num(int num)
{
   string s;
   if(num%2==0)
      s="even";
   else
      s="odd";
return s;
}
int main()
{
  int num;
  cout<<"enter number\n";
  cin>>num;
  cout<<cheak_num(num);
}
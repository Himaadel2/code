#include <iostream>
using namespace std;
int main(){	
  for(int i=0;i<5;i++)
  {
    if(i%2==0)
    {
      continue;//مش بينفذ البعده يرجع تاني لloop
      cout<<i<<"*******";
    }
  cout<<i<<"\n";
  }
  for(int i=5;;i++)
  {
    if(i>10)
      break;//بيخرج من loop
      cout<<i<<"\n";
  }
}
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter numbers\n";
    cin>>num1>>num2>>num3;
  /*
    if(num1>num2)
    {
        if(num1>num3)
            cout<<num1;
        else
            cout<<num3;
    }
    else if(num2>num3)
        cout<<num2;
    else
        cout<<num3;
      */
    if(num1>num2&&num1>num3)
        cout<<num1<<" the bigger number\n";
    else if(num2>num1&&num2>num3)
        cout<<num2<<" the bigger number\n";
    else
        cout<<num3<<" the bigger number\n";
}
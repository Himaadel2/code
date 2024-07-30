#include <iostream>
using namespace std;
int main()
{
    char f;
    int x;
    cin>>f;
    x=f;
    if(x>=65&&x<=90)
        cout<<char(x+32);
    else if(x>=97&&x<=122)
        cout<<char(x-32);
}
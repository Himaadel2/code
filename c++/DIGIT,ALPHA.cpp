#include <iostream>
using namespace std;
int main()
{
    char f;
    int x;
    cin>>f;
    x=f;
    if (x>=48&&x<=57)
        cout<<"IS DIGIT";
    else if(x>=65&&x<=90)
        cout<<"ALPHA\nIS CAPITAL";
    else if(x>=97&&x<=122)
        cout<<"ALPHA\nIS SMALL";
}
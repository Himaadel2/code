#include <iostream>
using namespace std;
int main()
{
int y,d,a,b,c;
cin >>y;
y++;
while (1)
{
a = y % 10;
b = (y % 100) / 10;
c = (y % 1000) / 100;
d = (y % 10000) / 1000;  
if (a != b && a != c && a != d && b != c && b != d && c != d)
{
cout << y;
break;
}
else
y++;   
}
}
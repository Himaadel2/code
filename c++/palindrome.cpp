#include <iostream>
using namespace std;
bool palindrome(int num1)
{
    int c = 0, y = num1;
    bool x = 0;
    while (num1)
    {
        c *= 10;
        c += num1 % 10;
        num1 /= 10;
    }
    if (y == c)
        x = 1;
    return x;
}
int main()
{
    int num1;
    cout << "enter number\n";
    cin >> num1;
    if (palindrome(num1) == 1)
        cout << "true";
    else
        cout << "false";
}
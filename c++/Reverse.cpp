#include <iostream>
using namespace std;
int reverse(int num1)
{
    int c = 0;
    while (num1)
    {
        c *= 10;
        c += num1 % 10;
        num1 /= 10;
    }
    return c;
}
int main()
{
    int num1;
    cout << "enter number\n";
    cin >> num1;
    cout << reverse(num1);
}
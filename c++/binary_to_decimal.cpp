#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, des = 0, i = 0, tem;
    cout << "enter number\n";
    cin >> num;
    while (num)
    {
        tem = num % 10;
        num /= 10;
        des += tem * pow(2, i);
        i++;
    }
    cout << des;
}
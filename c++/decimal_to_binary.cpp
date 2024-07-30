#include <iostream>
using namespace std;

int main()
{
    int num, binary[8];
    cout << "enter number";
    cin >> num;
    for (int i = 7; i >= 0; i--)
    {
        binary[i] = num % 2;
        num = num / 2;
    }
    for (int i = 0; i <= 7; i++)
    {
        cout << binary[i] << " ";
    }
}
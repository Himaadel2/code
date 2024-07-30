#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n;
    x = (n / 2) + 1;
    y = n - x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = x; j > i - 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= y; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = y; j >= i; j--)
        {
            if (j == y || j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }

    return 0;
}
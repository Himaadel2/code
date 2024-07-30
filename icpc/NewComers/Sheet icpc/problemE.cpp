#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long c = 0;
    for (long long i = 1; i <= a; i++)
    {
        if (b % i == 0 && b / i <= a)
        {
            c++;
        }
    }
    cout << c;
}
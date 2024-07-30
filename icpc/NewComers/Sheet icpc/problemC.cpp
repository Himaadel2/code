#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x = 0, c;
    char s[100 + 10];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> s[j];
        }
        c = 0;
        x = 0;
        for (int i = m - 1; i >= 0; i--)
        {
            if (s[i] == 'P')
                c++;
            else
            {
                if (c > x)
                    x = c;
                c = 0;
            }
        }
        cout << x << "\n";
    }
    return 0;
}
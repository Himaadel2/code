#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = n + 1; i <= m; ++i) {
        if (is_prime(i)) {
            if (i == m) {
                cout << "YES\n";
                return 0;
            } else {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int low, high;
    bool isPrime = true;
    cout << "Enter two numbers(intervals): ";
    cin >> low >> high;
    cout << "Prime numbers between " << low << " and " << high << " are: ";
    for (int i = low; i <= high; i++) {
        isPrime = true;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << " ";
    }
    return 0;
}
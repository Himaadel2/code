#include <iostream>
using namespace std;
int main()
{
    int n, x=0;
    cout << "enter size\n";
    cin >> n;
    int num1[n];
    cout << "enter element\n";
    for (int i= 0; i < n; i++){
        cin >> num1[i];
            x+=num1[i];
        }
    
    cout << x;
}
#include <iostream>
using namespace std;
int main()
{
    int num,x=0;
    cout << "enter number\n";
    cin >> num;
    while(num){
        x+=num%10;
        num/=10;
    }
    cout << x;
}
#include <iostream>
using namespace std;
int foi(int num)
{
    // int conter = 1;
    // for (int i = 1; i <= num; i++)
    //    conter *= i;
    // return conter;

    // recursion
    if (num > 1)
        return num * foi(num - 1);
    else
        return 1;
    // recursion
}

int main()
{
    int num;
    cout << "enter number\n";
    cin >> num;
    cout << "factorial of"<< num << "=" <<foi(num);
}
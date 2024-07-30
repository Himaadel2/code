#include <iostream>
using namespace std;
int sum(int num)
{
    // int conter = 0;
    // for (int i = 1; i <= num; i++)
    //     conter += i;
    // return conter;


    //recursion
    if (num > 1)
        return num + sum(num-1);
    else 
        return 1;
    //recursion
}

int main()
{
    int num;
    cout << "enter number\n";
    cin >> num;
    cout << sum(num);
}
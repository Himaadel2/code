#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int y;
    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j){ 
        y=i+j;
        if(j%2==0){
            cout<<1;
        }
        else
        cout<<0;
        
        }
        cout << "\n";
    }
    return 0;
}
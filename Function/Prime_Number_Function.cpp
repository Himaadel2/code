#include <iostream>
#include <cmath>
using namespace std;
string Prime(int num1)
{
string s;
if(num1==1||num1==0){
s="no";
}
else{
for(int i=2;i<=sqrt(num1);i++){
    if(num1 %i==0&&num1!=i)
        s="no";
    else
        s="yes";
}
}
    return s;
}
int main()
{
    int num1;
    cout << "enter number\n";
    cin >> num1;
    cout << Prime(num1);
}
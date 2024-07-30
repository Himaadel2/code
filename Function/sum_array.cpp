#include <iostream>
using namespace std;
int sum(int number[],int conter)
{
    int res=0;
    for (int i=0;i<conter;i++)
    {
        res+=number[i];
    }
    return res;
}
int main()
{
    int num[]={10,20,30,40,500},con;
    con=size(num);
    cout<<sum(num,con)<<"\n";
}
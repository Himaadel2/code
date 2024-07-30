#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int>number)
{
    int res=0;
    for (int i=0;i<number.size();i++)
    {
        res+=number.at(i);
    }
    return res;
}
int main()
{
    vector<int>num={10,20,30,40,500};
    cout<<sum(num)<<"\n";
}
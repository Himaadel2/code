#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>num={10,20,30,555};
    vector<int>::iterator it;
    //loop with iterator
    for(it=num.begin();it<num.end();it++)
    {
        cout<<*it<<"\n";
    }
    cout<<"***********\n";
    // ranged loop with for
    for(int val : num)
    {
        cout<<val<<"\n";
    }
    cout<<"***********\n";
    int num1[5]={10,20,30,40,50};
        for(int x : num1)
    {
        cout<<x<<"\n";
    }
    return 0;
}
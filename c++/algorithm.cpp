#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>num={10,500,60,-20,20,20,100,20};
    vector<int>::iterator it;
    int x=20;
    int conter=count(num.begin(),num.end(),x);
    cout<<"conter "<<x<<" in vector :"<<conter;
    cout<<"\n***********\n";
        for(int &val : num)
    {
        cout<<val<<"\n";
    }
    cout<<"***********\n";
    sort(num.begin(),num.end());
    for(int &val : num)
    {
        cout<<val<<"\n";
    }
    cout<<"***********\n";
    reverse(num.begin(),num.end());
    for(int &val : num)
    {
        cout<<val<<"\n";
    }
    cout<<"***********\n";
    return 0;
}
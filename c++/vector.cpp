#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>num1={10,20,30,555};
    vector<int>num2{100,200,300,400};
    vector<int>num3(4,50);
    for(int i=0;i<num1.size();i++)
        cout<<num1.at(i)<<" ";
    cout<<"\n***********\n";
    for(int i=0;i<num2.size();i++)
        cout<<num2.at(i)<<" ";
    cout<<"\n***********\n";
    for(int i=0;i<num3.size();i++)
        cout<<num3.at(i)<<" ";
    cout<<"\n***********\n";
    cout<<"number of num3: "<<num3.size();
    num3.push_back(100);
    cout<<"\nnumber of num3: "<<num3.size();
    cout<<"\n***********\n";
    for(int i=0;i<num3.size();i++)
        cout<<num3.at(i)<<" ";
    cout<<"\n***********\n";
    cout<<"number of num1: "<<num1.size();
    num1.pop_back();
    cout<<"\nnumber of num1: "<<num1.size()<<"\n";
    for(int i=0;i<num1.size();i++)
        cout<<num1.at(i)<<" ";
    cout<<"\n***********\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A(){
        cout<<"Hi I am A constructor\n";
    }
    A(int x){
        cout<<"The value of x = "<<x<<"\n";
    }
};
class B : public A{
public:
    B(int y){
        cout<<"The value of y = "<<y<<"\n\n";
    }
};
class c : public A{
public:
    c(int k,int j):A(k){
    cout<<"The value of k = "<<k
    <<" and the value of j = "<<j<<"\n";
    }
};
int main(){
    B obj1(6);
    c obj2(2,8);
    return 0;
}
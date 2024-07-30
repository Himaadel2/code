#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,x,sum=0,y;
    float m;
    cin>>n;
    while(n--){
        cin>>x>>m;
        m=ceil(x*m);
        sum=0;
        for (int i=0;i<x;i++){
            cin>>y;
            if(y>=50)
                sum++;
        }
        if(sum>=m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}


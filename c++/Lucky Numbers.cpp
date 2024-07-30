#include <iostream>
using namespace std;
int main() {
    bool m,m2=1;
    int n1,n2,n,c;
    cin >>n1>>n2;
    for (int i=n1;i<=n2;i++)
    {
        n=i;
        m=0;
        while (n>0)
        {
            c=n%10;
            n=n/10;
            if(c!=4&&c!=7)
            {
                m=1;
                break;
            }
        }
        if(m!=1){
            cout<<i<<" ";
            m2=0;
        }
    }
    if(m2==1)
        cout<<-1;
}
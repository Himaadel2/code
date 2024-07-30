#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int num1=n,num2=n;
while(1){
    bool num1_flag=0;
    bool num2_flag=0;
    for(int i=2; i<num1; i++)
        if(num1%i==0)
            num1_flag=1;
    for(int i=2; i<num2; i++)
        if(num2%i==0)
        num2_flag=1;
    if(num1_flag==0&&num2_flag==0&&num1!=n){
        cout<<num2<<" "<<num1;
        break;
}
    else if(num1_flag==0){
        cout<<num1;
        break;
}
    else if(num2_flag==0){
        cout<<num2;
        break;
}
        num1++;
        num2--;
}
}
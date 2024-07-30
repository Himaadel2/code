#include<iostream>
#include<cmath>
using namespace std;
double mortgage(double p,double r,double n){
    r=(r/100)/12;
    double m =(p*r)/(1-pow(1+r,-n*12));
    cout<<"monthly mortgage payment: "<<m<<endl;
    return m;
}
double repay(double m,double n){
    double t = m*n*12;
    cout<<"total amount she will have to repay: "<<t<<endl;
    return t;
}
void intenrest(double t,double p){
    double i = t-p;
    cout<<"total Benefit: "<<i<<endl;
}
int main(){
    double p,r,n;
    cout<<"enter loan,Benefit,time repaid in a time period of year\n";
    cin>>p>>r>>n;
    double m = mortgage(p,r,n);
    // cout<<"monthly mortgage payment: "<<m<<endl;
    double t = repay(m,n);
    // cout<<"total amount she will have to repay: "<<t<<endl;
    intenrest(t,p);
}

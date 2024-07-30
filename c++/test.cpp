#include <iostream>
using namespace std;
double corr(double array[], int g, int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    double m = sum / n;
    double s1 = 0.0, s2 = 0.0;
    for (int i = g; i < n; i++)
    {
        s1 += (array[i] - m) * (array[i - g] - m);
        s2 += (array[i] - m) * (array[i] - m);
    }
    double aut = s1 / s2;
    return aut;
}
int main()
{
    int n,t;
    cout<<"enter size , array , gap:\n";
    cin>>n;
    double z[n];
    for(int i = 0 ; i < n ; i++ ){
        cin>>z[i];
    }
    cin>>t;
//    double z[6] = {3, 12.5, 9.6, 2.9, 7.8, 10.2};
//    int t = 3;
    cout << "reslut is : " << corr(z, t, n);
}
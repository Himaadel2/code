#include <iostream>
using namespace std;
int main()
{
    int day,month,year;
    cout << "enter day\n";
    cin >> day;
    year=day/365;
    cout<<"year\n"<<year;
    month=(day%365)/30;
    cout<<"\nmonth\n"<<month;
    day=(day%365)%30;
    cout<<"\nday\n"<<day;
}
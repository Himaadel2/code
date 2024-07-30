#include<iostream>
using namespace std;
bool leap(int year)
{
	int c;
	if(year>0)
        if((year%100!=0&&year%4==0)||(year%400==0))
            c=1;
    return c;
}
int cheak(int day,int month,int z)
{
    bool x=0;
    if(month>0&&day>0){
        if(((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day<32)||((month==4||month==6||month==9||month==11)&&day<31))
            x=1;
        else if(month==2&&((z==0&&day<29)||(z==1&&day<30)))
            x=1;
    }
return x;
}
int next_day(int day,int month,int z)
{
    if(((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day<31)||((month==4||month==6||month==9||month==11)&&day<30))
        day+=1;
    else if(month==2&&((z==0&&day<28)||(z==1&&day<29)))
        day+=1;
return day;
}
int next_month(int day,int month,int z)
{
    if(((month==1||month==3||month==5||month==7||month==8||month==10)&&day==31)||((month==4||month==6||month==9||month==11)&&day==30))
        month+=1;
    else if(month==2&&((z==0&&day==28)||(z==1&&day==29)))
        month+=1;
return month;
}
int next_year(int day,int month,int year)
{
    if(month==12&&day==31)
        year+=1;
return year;
}
int main()
{
    int year,month,day,z,s[3],v;
    cout<<"day  month  year\n";
	cin>>day>>month>>year;
	z=leap(year);
    v=cheak(day,month,z);
    next_day(day,month,z);
    if(next_day(day,month,z)>day)
    {
        s[0]=next_day(day,month,z);
        s[1]=month;
        s[2]=year;
    }
    else if(next_day(day,month,z)==day)
        next_month(day,month,z);
    if(next_month(day,month,z)>month)
    {
	    s[0]=1;
	    s[1]=next_month(day,month,z);
	    s[2]=year;
    }
    else if(next_month(day,month,z)==month)
        next_year(day,month,year);
    if(next_year(day,month,year)>year)
    {
	    s[0]=1;
	    s[1]=1;
	    s[2]=next_year(day,month,year);
    }
    if(z==1)
        cout<<"leap\n";
    else
        cout<<"not leap\n";
    if(v==1)
        cout<<"true\n";
    else
        cout<<"false\n";
    cout<<s[0]<<"/"<<s[1]<<"/"<<s[2];
}
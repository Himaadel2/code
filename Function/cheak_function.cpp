#include<iostream>
using namespace std;
bool leap(int year){
	int c;
	if(year>0)
if((year%100!=0&&year%4==0)||(year%400==0))
c=1;
return c;
}
int cheak(int day,int month,int z){
bool x=0;
int year;
if(month>0&&day>0){
if(((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day<32)||((month==4||month==6||month==9||month==11)&&day<31))
x=1;
else if(month==2&&((z==0&&day<29)||(z==1&&day<30)))
x=1;
}
return x;
}
int main(){
    int year,month,day,z;
    cout<<"day \n month \n year\n";
	cin>>day>>month>>year;
	leap(year);
	z=leap(year);
    cheak(day,month,z);
    if(cheak(day,month,z)==0)
	cout<<"false";
	else
	cout<<"ture";
}
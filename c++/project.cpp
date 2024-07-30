#include <iostream>
#include <string.h>
#include <cstring>
#include <array> //طريقه اخري لكتابه array
using namespace std;
int x = 20;  // global variabie   عالمي
#define d 50 //==const
struct project
{
    string name;
    int age;
    string address;
};
union project1
{
    int x;
    int y;
    int z;
};

int main()
{
    project p;
    p.name="hima";
    p.age=19;
    p.address="ddddd";
    // ||
    project p1={"hi",55,"dfdf"};
    project p2[5];
    p2[0].name="hima";
    p2[0].age=19;
    p2[0].address="ddddd";
    cout << "===================================\n";
    project1 m;
    m.x=4;
    m.z=6;
    m.y=9;
    cout<<m.x<<"\n"<<m.y<<"\n"<<m.z<<"\n";
    cout << "===================================\n";
    int num1 = 1e9;
    short num2 = 1e4;
    cout << sizeof(short) << "\n"; // size
    cout << sizeof(int) << "\n";
    cout << sizeof(num1) << "\n";
    cout << sizeof(num2) << "\n";
    // using bigint=long long;//name type
    typedef long long bigint;
    bigint num3 = 1e18;
    cout << sizeof(bigint) << "\n";
    cout << num1 << "\n"
         << num2 << "\n"
         << num3 << "\n";
    cout << "===================================\n";
    double num4 = 20.5; // operator
    int num5 = 20;
    char c = 'C'; // 67
    cout << num4 + num5 << "\n"
        << num5 + c << "\n"
        << num4 + c << "\n"
        << (int)num4 + num5 << "\n"
        << int(num4) + num5 << "\n";
    cout << "===================================\n";;
    unsigned long long num6 = 1e19;
    cout << num6 << "\n";
    cout << "===================================\n";
    cout << 9.2f + 10.5f << "\n"
         << 9.2 + 10.5 << "\n"
         << int(9.2 + 10.5) << "\n";
    cout << sizeof(9.5f + 10.5f) << "\n";
    cout << sizeof(9.5f + 10.5) << "\n";
    cout << sizeof(int(9.5 + 10.5)) << "\n";
    cout << 10.f / 3.f << "\n"
         << 10 / 3 << "\n"
         << 16 % 5 /*int فقط*/ << "\n";
    cout << "===================================\n";
    cout << (10 == 10) << "\n";  // 1=>true
    cout << (100 == 10) << "\n"; // 0=>false
    cout << (10 != 10) << "\n";  // 0=>false
    cout << (100 != 10) << "\n"; // 1=>true
    cout << (100 > 10) << "\n";  // 1=>true
    cout << (10 > 10) << "\n";   // 0=>false
    cout << (100 >= 10) << "\n"; // 1=>true
    cout << (10 >= 10) << "\n";  // 1=>true
    cout << (9 >= 10) << "\n";   // 0=>false
    cout << !(10 == 10) << "\n"; // 0=>false
    cout << !(10 != 10) << "\n"; // 1=>true
    cout << "===================================\n";
    int age = 20, ponit = 800;
    cout << (age >= 10 && ponit >= 500) << "\n"; // 1=>true
    cout << (age <= 10 && ponit >= 500) << "\n"; // 0=>false
    cout << (age >= 10 || ponit >= 500) << "\n"; // 1=>true
    cout << (age <= 10 || ponit >= 500) << "\n"; // 1=>true
    cout << (age <= 10 || ponit <= 500) << "\n"; // 0=>false
    cout << "===================================\n";
    int a = 5, b = 6; // local variabie
    (a > b) ?         //=if     else
        cout << 5
            : cout << 6; // ternaty operator
    // cout<<(a>b ? "5":"6")
    (a > b) ? cout << 5 : cout << (ponit >= 500 ? "12\n" : "20\n"); // nested ternaty operator
    cout << "===================================\n";
    const int z = 10;
    // z = 30; error
    cin >> a >> b;
    cout << x;                                       // 20
    cout << z;                                       // 10
    cout << d;                                       // 50
    cout << "===================================\n"; // Pointer
    int rows[5] = {11, 22, 33, 44, 55};
    int *ptr = rows;
    int *pt = new int(20);
    cout<<pt<<"\n";//address 20
    cout<<*pt<<"\n";//value 20
    cout<<&pt<<"\n";//address pt
    for (int i = 0; i < 5; i++)
    {
        cout << *rows + i << "\n";
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(rows + i) << "\n";
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << "\n";
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr + i << "\n";
    }
    cout << "===================================\n"; // memory location
    int nu[]{20, 30, 40};
    cout << "location:" << &nu[0] << "\n";
    cout << "location:" << &nu[1] << "\n";
    cout << "location:" << &nu[2] << "\n";
    cout << "===================================\n"; // many number in array
    int hi[]{1, 2, 3, 4, 5, 6, 78, 5, 9, 82, 4};     // c style
    array<int, 6> kkkk = {11, 22, 33, 44, 55, 66};   // class array
    /*طريقه اخري لكتابه array
    array<type,size>name
    */
    cout << kkkk.size() << "\n"; // تستخدم مع مكتبه array وطريقه تسجيل array الاخري
    cout << sizeof(hi) / sizeof(hi[0]) << "\n";
    /* |||||||||
    int || float || long
        Answer /4
    double
        Answer /8
    ||||||||
    size(hi)
     */
    cout << "===================================\n"; // array 2 dimensional
    // good
    int rows = 3, col = 3;
    int ar[rows][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // bad
    //  int ar[rows][col]={1,2,3,4,5,6,7,8,9};
    cout << ar[1][2] << "\n";                        // 6
    cout << ar[0][1] << "\n";                        // 2
    cout << ar[2][0] << "\n";                        // 7
    cout << "===================================\n"; // تغير عناصر array كامله الي رقم
    // تستخدم مع مكتبه array وطريقه تسجيل array الاخري
    cout << kkkk[0] << "\n";
    cout << kkkk[1] << "\n";
    cout << kkkk[2] << "\n";
    cout << kkkk[3] << "\n";
    cout << kkkk[4] << "\n";
    cout << kkkk[5] << "\n";
    kkkk.fill(7);
    cout << kkkk[0] << "\n";
    cout << kkkk[1] << "\n";
    cout << kkkk[2] << "\n";
    cout << kkkk[3] << "\n";
    cout << kkkk[4] << "\n";
    cout << kkkk[5] << "\n";
    kkkk.fill('A');
    cout << kkkk[0] << "\n";
    cout << kkkk[1] << "\n";
    cout << kkkk[2] << "\n";
    cout << kkkk[3] << "\n";
    cout << kkkk[4] << "\n";
    cout << kkkk[5] << "\n";
    kkkk.fill(true);
    cout << kkkk.front() << "\n";
    cout << kkkk[1] << "\n";
    cout << kkkk.at(2) << "\n";
    cout << kkkk[3] << "\n";
    cout << kkkk[4] << "\n";
    cout << kkkk.back() << "\n";
    kkkk.fill(false);
    cout << kkkk[0] << "\n"; //===kkkk.front()
    cout << kkkk[1] << "\n";
    cout << kkkk[2] << "\n"; //===kkkk.at(2)
    cout << kkkk[3] << "\n";
    cout << kkkk[4] << "\n";
    cout << kkkk[5] << "\n";                         //===kkkk.back()
    cout << kkkk.empty() << "\n";                    // يطبع 1لو array مش فاضيه ويطيع 0لو فاضيه
    cout << "===================================\n"; // string       class
    string name = "hima"; /*hima*/                   // ينتهي ب  \ 0  ويسمي Null Terminated String
    char name1[] = "hi\0ma";                         // hi     c style
    char name2[] = {'h', 'i', 'm', 'a', '\0'};       //==name
    cout << int(name1[2]) << "\n";                   // null =>\0 => ASCII Value => 0
    cout << int(name[4]) << "\n";
    cout << "===================================\n"; // جمع نصينConcatenating Strings
    // char
    char fname[] = {"hima "}, lname[] = {"adel"};
    cout << fname << lname << "\n";       // Normal Way
    cout << strcat(fname, lname) << "\n"; // strcat => Include string.h
    // string
    string firstname = {"hima "}, lastname = {"adel"};
    cout << firstname + lastname << "\n";            // With +
    cout << firstname.append(lastname) << "\n";      // append بدون المكتبه
    cout << "===================================\n"; // skip
    // int hi[]{1, 2, 3, 4, 5, 6, 78, 5, 9, 82, 4};
    for (int i = 0; i < 11; i++)
    {
        if (hi[i] == 6)
            continue;
        cout << hi[i] << "\n";
    }
    cout << "===================================\n"; // لطباعه عدد معين من الارقام العشريه
    cout << fixed << setprecision(9);
    // code
    cout << "===================================\n";//function
    /*
    bool year(int x = (default value)5 (parameter))
    year(x   (argument));
    */
    cout << "===================================\n";
    int n = 32, x = 0;
    while (n)
    {
        x *= 10;
        x += n % 10;
        n /= 10;
        if (n == 0)
            break;
    }
    cout << x;
    cout << "===================================\n";
    int x,y=10,z=10;
    x=(y!=z);
    cout<<x;//0 FALSE
    x=(y==z);
    cout<<x;//1 TRUE
    cout << "===================================\n";
    char s[5]="hima",s1[6]="kkk";
    strcpy(s1,s);
    cout<<s<<"   "<<s1;

}
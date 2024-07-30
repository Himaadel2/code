#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    cout << tolower('A') << endl; //97 =>ASCII
    cout << char(tolower('A')) << endl; // a
    cout << toupper('b') << endl; //66 =>ASCII
    cout << char(toupper('b')) << endl; //B


    //بيطبع رقم 0لو غلط ولو صح بيطبع رقم غير 0


    cout << isupper('A') << endl; //true
    cout << isupper('a') << endl; //false
    cout << islower('A') << endl; //false
    cout << islower('a') << endl; //true
    cout << isspace(' ') << endl; //true 
    cout << isspace('\n') << endl; //true
    cout << isspace('\t') << endl; //true
    cout << isspace('k') << endl; //false
    return 0;
}
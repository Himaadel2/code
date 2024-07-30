#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main() {
    string password;
    char ch;
    cout << "Enter password: ";
    while ((ch = getch()) != '\r') { // انتظر حتى يتم الضغط على Enter
        if (ch == '\b') { // إذا تم الضغط على Backspace
            if (!password.empty()) {
                cout << "\b \b"; // امسح الحرف الأخير
                password.pop_back();
            }
        } else {
            cout << "*"; // أظهر نجمة بدلاً من الحرف
            password += ch;
        }
    }
    cout << "\nPassword: " << password << endl;
    return 0;
}
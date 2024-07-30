#include <iostream>
#include <iomanip>
using namespace std;
class PhoneNumber //(123) 456-7891
{
    friend ostream &operator<<(ostream &, const PhoneNumber &);
    friend istream &operator>>(istream &, PhoneNumber &);

private:
    string areaCode; // 3-digit area code
    string exchange; // 3-digit exchange
    string line;     // 4-digit line
};                   // end class PhoneNumber
ostream &operator<<(ostream &output, const PhoneNumber &number)
{
    output << "(" << number.areaCode << ") "
           << number.exchange << "-" << number.line;
    return output;
}
istream &operator>>(istream &input, PhoneNumber &number)
{
    input.ignore();                      // skip (
    input >> setw(3) >> number.areaCode; // input area code
    input.ignore(2);                     // skip ) and space
    input >> setw(3) >> number.exchange; // input exchange
    input.ignore();                      // skip dash (-)
    input >> setw(4) >> number.line;     // input line
    return input;
}
class Box
{
public:
    double getLength() { return length; }
    void setLength(double len) { length = len; }
    Box operator+(const Box &b)
    {
        Box box;
        box.length = this->length + b.length;
        return box;
    }

private:
    double length;
};

int main()
{
    PhoneNumber u;
    cin >> u;
    cout << u;
    Box b1, b2, b3;
    b1.setLength(5.5);
    b2.setLength(6.5);
    b3 = b1 + b2;
    cout << b3.getLength();
}
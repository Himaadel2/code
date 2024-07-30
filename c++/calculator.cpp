#include <iostream>
using namespace std;
float calculator(int num1, char op, int num2)
{
  float c;
  switch (op)
  {
  case '+':
    c = num1 + num2;
    break;
  case '-':
    c = num1 - num2;
    break;
  case '*':
    c = num1 * num2;
    break;
  case '/':
    c = float(num1) / float(num2);
    break;
  }
  return c;
}
int main()
{
  int num1, num2;
  char op;
  cout << "enter operation\n";
  cin >> num1 >> op >> num2;
  cout << calculator(num1, op, num2);
}
#include <iostream>
using namespace std;
int pow(int num1, int num2)
{
   //int c=1;
   //for(int i=0;i<num2;i++)
   //c=c*num1;
   //return c;
   // recursion
   if (num2 > 0)
   {
      return num1 * pow(num1, num2 - 1);
   }
   else
      return 1;
}
int main()
{
   int num1, num2;
   cout << "enter number\n";
   cin >> num1 >> num2;
   cout << pow(num1, num2);
}
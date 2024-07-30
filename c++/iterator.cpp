#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /*usd auto
    auto iter = num.rbegin();||vector<int>::reverse_iterator iter=num.rbegin();
    auto iter = num.rend();||vector<int>::reverse_iterator iter=num.rend();
    rbegin=end-1
    rbegin++=end-2
    rend-1=begin
    rend--=begin+1
    */
    vector<int> num1 = {10, 20, 30, 555};
    vector<int>::iterator it = num1.begin();
    auto ite = num1.begin() + 1;
    vector<int>::iterator last = num1.end() - 1; // بشاور علي اخر عنصر
    vector<int>::iterator last2 = num1.end();    // بيشاور علي عنصر بعد اخر عنصر
    cout << "first :" << *it << "  " << *num1.begin() << "\nsecond :" << *ite
         << "\nsecond :" << it[1] << "\nthird :" << it[2];
    cout << "\nlast :" << *last;
    cout << "\nbefore last :" << *(last - 1);
    cout << "\nlast :" << *last2;
    cout << "\n***********\n";
    advance(it, 3);
    cout << "first :" << *it;
    advance(it, -2);
    cout << "first :" << *it;
    cout << "\n***********\n";
    num1.erase(num1.begin(), num1.begin() + 2);
    for (int i = 0; i < num1.size(); i++)
        cout << num1.at(i) << " ";
    cout << "\n***********\n";
    return 0;
}
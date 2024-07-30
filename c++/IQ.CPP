#include <iostream>
using namespace std;
int main()
{
    int ans[5], ponits = 0, sequences[5][6]{
        {1, 1, 2, 3, 5, 8}, 
        {0, 5, 10, 15, 20, 25}, 
        {0, 1, 3, 6, 11, 18}, 
        {6, 11, 15, 18, 20, 21}, 
        {30, 40, 20, 30, 15, 25}};
    cout << "Type The Missing Number In Sequences:\n";
    cout << "Sequences 1\n";
    cout << "1, 1, 2, 3, 5, ??\n";
    cin >> ans[0];
    cout << "Sequences 2\n";
    cout << "0, 5, 10, ??, 20, 25\n";
    cin >> ans[1];
    cout << "Sequences 3\n";
    cout << "0, 1, 3, 6, ??, 18\n";
    cin >> ans[2];
    cout << "Sequences 4\n";
    cout << "6, 11, ??, 18, 20, 21\n";
    cin >> ans[3];
    cout << "Sequences 5\n";
    cout << "30, 40, ??, 30, 15, 25\n";
    cin >> ans[4];
    if (ans[0] == sequences[0][5])
        ponits++;
    else
        cout << "Sequences 1:" << sequences[0][5];
    if (ans[1] == sequences[1][3])
        ponits++;
    else
        cout << "\nSequences 2:" << sequences[1][3];
    if (ans[2] == sequences[2][4])
        ponits++;
    else
        cout << "\nSequences 3:" << sequences[2][4];
    if (ans[3] == sequences[3][2])
        ponits++;
    else
        cout << "\nSequences 4:" << sequences[3][2];
    if (ans[4] == sequences[4][2])
        ponits++;
    else
        cout << "\nSequences 5:" << sequences[4][2];
    cout << "\nYour Points Is " << ponits << " from 5";
}
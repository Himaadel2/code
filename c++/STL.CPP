#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility> //pair
#include <queue>   //Queue,priority_queue
#include <deque>   //deque
#include <stack>
#include <map>
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
using namespace std;
int main()
{
    fast();
    vector<int> num0;
    vector<int> num1 = {10, 20, 30, 555};
    vector<int> num3(4, 50);
    vector<int> num4(4); // size element
    num0.push_back(50);
    num0.push_back(40);
    //    num0.at(1)=5;//error
    for (int i = 0; i < num0.size(); i++)
        cout << num0.at(i) << " "; // 50,40
    cout << "\n***********\n";
    for (int i = 0; i < num1.size(); i++)
        cout << num1.at(i) << " "; // 10 20 30 555
    cout << "\n***********\n";
    for (int i = 0; i < num3.size(); i++)
        cout << num3.at(i) << " "; // 50 50 50 50
    cout << "\n***********\n";
    cout << "number of num3: " << num3.size(); // 4
    num3.push_back(100);
    cout << "\nnumber of num3: " << num3.size(); // 5
    cout << "\n***********\n";
    for (int i = 0; i < num3.size(); i++)
        cout << num3.at(i) << " "; // 50 50 50 50 100
    cout << "\n***********\n";
    cout << "number of num1: " << num1.size(); // 4
    num1.pop_back();
    cout << "\nnumber of num1: " << num1.size() << "\n"; // 3
    for (int i = 0; i < num1.size(); i++)
        cout << num1.at(i) << " "; // 10 20 30
    cout << "\n***********\n";
    cout << num1.front() << endl;                        // 10
    cout << num1.back();                                 // 30
    cout << "\nnumber of num1: " << num1.size() << "\n"; // 3
    for (int i = 0; i < num1.size(); i++)
        cout << num1.at(i) << " ";                 // 10 20 30
    vector<vector<int>> hi(5, vector<int>(10, 0)); // 5 row 10 coulm
    cout << "\n***********\n\n";
    pair<char, int> pair2('a', 10);
    pair<char, int> pair3 = make_pair('a', 10);
    pair<int, int> pair4;
    pair<int, vector<int>> pair5;
    pair<int, pair<int, string>> pair6;
    vector<pair<int, string>> v;
    v.emplace_back(2, "");
    v.push_back(make_pair(0, ""));
    pair4.first = 2;
    pair4.second = 6;
    pair5.first = 7;
    pair5.second.push_back(66);
    pair5.second.push_back(65);
    pair4.first = 2;
    pair6.second.first = 5;
    pair6.second.second = "gugubl";
    v.at(0).first = 10;
    v.at(0).second = "knoll";
    v.at(1).first = 10;
    v.at(1).second = "knoll";
    cout << pair5.second.at(0) << endl;  // 66
    cout << pair6.second.first << endl;  // 5
    cout << pair6.second.second << endl; // gugubl
    cout << v.at(0).first << endl;       // 10
    cout << v.at(0).second << endl;      // knoll
    cout << (pair2 == pair3) << endl;    // 1
    cout << "\n***********\n\n";
    queue<int> q1; // empty queue of ints
    queue<string> q2({"apple", "banana", "orange"});
    // queue<int> q2 = {1,2,3,4,5}; // wrong way
    q1.push(5);
    q1.push(6);
    q1.push(9);
    cout << q1.front() << endl; // 5
    cout << q1.back() << endl;  // 9
    cout << q1.size() << endl;  // 3
    q1.pop();                   // delet 9
    cout << q1.front() << endl; // 6
    cout << q1.empty() << endl; // 0
    q1.emplace(20);
    cout << q1.back() << endl; // 20
    cout << "\n***********\n\n";
    deque<int> dq; // Empty deque of ints
    deque<int> dq2 = {1, 2, 3, 4, 5};
    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_back(40);
    for (int x : dq)
    {
        cout << x << " "; // 30 10 20 40
    }
    cout << endl;
    dq.pop_back();
    dq.pop_front();
    for (int x : dq)
    {
        cout << x << " "; // 10 20
    }
    cout << endl;
    dq.assign(5, 6);
    for (int x : dq)
    {
        cout << x << " "; // 6 6 6 6 6
    }
    cout << endl;
    dq.emplace(dq.cbegin() + 2, 5);
    for (int x : dq)
    {
        cout << x << " "; // 6 6 5 6 6 6
    }
    cout << "\n***********\n\n";
    stack<int> st;
    st.push(50);
    st.push(60);
    st.push(90);
    int x = st.top();
    cout << st.size() << endl;
    cout << x << endl; // 90
    st.pop();
    x = st.top();
    cout << x << endl;          // 60
    cout << st.empty() << endl; // 0
    cout << "\n***********\n\n";
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(9);
    pq.push(7);
    cout << "size:" << pq.size() << "\nelement pq:"; // 4
    while (!pq.empty())
    {
        cout << pq.top() << " "; // 10 9 7 5
        pq.pop();
    }
    cout << "\n======\n";
    priority_queue<int, vector<int>, greater<int>> pq1; // عكس pq
    pq1.push(5);
    pq1.push(10);
    pq1.push(9);
    pq1.push(7);
    cout << "element pq1:";
    while (!pq1.empty())
    {
        cout << pq1.top() << " "; // 5 7 9 10
        pq1.pop();
    }
    cout << "\n======\n";
    priority_queue<int> pq2;
    pq2.push(55);
    pq2.push(55);
    pq2.push(55);
    pq2.push(55);
    pq2.push(55);
    pq.swap(pq2);
    while (!pq.empty())
    {
        cout << pq.top() << " "; // 55 55 55 55 55
        pq.pop();
    }
    cout << "\n======\n";
    while (!pq2.empty())
    {
        cout << pq2.top() << " "; // 10 9 7 5
        pq2.pop();
    }

    cout << "\n***********\n\n";
    map<int, int> m; //<key,value>
    m[1] = 5;        // key=>1   value=>5
    m[10] = 54;
    m[5];
    m[0] = 6;
    int x = 8, y = 77;
    m[x] = y;
    m.insert(pair<int, int>(4, 50)); // key=>4  value=>50
    m.insert(pair<int, int>(1, 50)); // not insert key really exist
    for (auto it : m)
        cout << "key: " << it.first << " value: " << it.second << endl; // print sort key (0,1,4,5,10)

    if (m.find(10) != m.end()) // 10=>key   exist
        cout << "true";

    if (m.find(2) == m.end()) // not exist
        cout << "\nfalse";

    if (m.count(10)) // 10=>key   exist
        cout << "\ntrue";

    if (!m.count(2)) // not exist
        cout << "\nfalse";

    // m.count() return 0||1
    cout << "\nsize: " << m.size();
    m.erase(x);
    cout << "\nsize: " << m.size() << endl;
    m.erase(m.begin() /*|| m.cbegin() */); // delete first element
    for (auto it : m)
        cout << "key: " << it.first << " value: " << it.second << endl; // print key (1,4,5,10)
    m.erase(prev(m.end() /*|| m.cend()*/));                             // delete last element
    cout << "*********\n";
    for (auto it : m)
        cout << "key: " << it.first << " value: " << it.second << endl; // print sort key (1,4,5)
    cout << "empty: " << m.empty();                                     // 0
    m.clear();                                                          // delete all element
    cout << "\nempty: " << m.empty();                                   // 1

    unordered_map<int, int> m1;
    m1[5] = 4;
    m1[4] = 40;
    m1[10] = 24;
    for (auto it : m1)
        cout << "key: " << it.first << " value: " << it.second << endl; // print key (10,4,5)

    set<int> s1; // sort smallest to greater
    s1.insert(5);
    s1.insert(5);
    s1.insert(4);
    s1.insert(50);
    s1.insert(9);
    s1.insert(15);
    for (auto it : s1)
        cout << "value: " << it << endl; // print  (4,5/*one only*/,9,15,50)
    cout << *s1.lower_bound(15) << endl; // after x or equal
    cout << *s1.upper_bound(15) << endl; // after x
    cout << "*****\n";

    set<int, greater<>> s2; // sort greater to smallest
    s2.insert(5);
    s2.insert(4);
    s2.insert(50);
    s2.insert(9);
    s2.insert(15);
    s2.lower_bound(9);
    for (auto it : s2)
        cout << "value: " << it << endl; // print  (50,15,9,5,4)
    if (s2.find(5) != s2.end())          // exist
        cout << "true\n";
    if (s2.find(44) == s2.end()) // not exist
        cout << "false\n";
    if (s2.count(5)) // exist
        cout << "true";
    if (!s2.count(44)) // not exist
        cout << "\nfalse\n";
    s2.erase(s2.find(5));
    for (auto it : s2)
        cout << "value: " << it << endl; // print  (50,15,9,4)
    cout << *s2.lower_bound(50) << endl; // after x or equal
    cout << *s2.upper_bound(50) << endl; // after x

    multiset<int> ms;
    ms.insert(5);
    ms.insert(5);
    ms.insert(4);
    ms.insert(4);
    ms.insert(9);
    ms.insert(15);
    for (auto it : ms)
        cout << "value: " << it << endl; // print  (4,4,5,5,9,15)
    cout << "*****\n";
    multiset<int, greater<>> ms1;
    ms1.insert(5);
    ms1.insert(5);
    ms1.insert(4);
    ms1.insert(4);
    ms1.insert(9);
    ms1.insert(15);
    for (auto it : ms1)
        cout << "value: " << it << endl; // print  (15,9,5,5,4,4)
    cout << *ms1.begin() << endl;        // first element
    cout << *ms1.crbegin() << endl;      // last element
}
/*
    push_back(5);بتخزن القيمه بعد اخر قيمه
    =
    emplace_back(2);faster
    insert(iterator,value)بيخزن قيمه في مكان البشاور عليه
    insert(iterator,value1,value2) يخزن قيمه2 في مكان البشاور عليه بعدد قيمه1
    iterator=begin()||end()||r
    pop_back()بتشيل اخر عنصر
    erase(iterator)بتشيل الرقمالمشار عليه
    erase(iterator1,iterator2 +1)بيشيل الارقام من iterator1الي iterator2
    v1.swap(v2)v1بيتبدل مع v2
*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>//pair
#include <queue>//Queue,priority_queue
#include <deque>//deque
#include <stack>
#include <map>
#include <set>//set
using namespace std;
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
int main() {
    fast();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("err.txt", "w", stderr);
    int x,y;
    cin>>x>>y;
    function< int (int ,int )> sum =  [&]() {
        return x + y;
    };
}
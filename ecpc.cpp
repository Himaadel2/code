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
    long long n,m,sum=0;
    cin>>n>>m;
    long long arr[n][m];
    long long k;
    cin>>k;
    for (long long i = 0; i < n; ++i) {
        for (long long j = 0; j < m; ++j) {
            cin>>arr[i][j];
        }
    }
    multiset<long long,greater<>>q;
    multiset<long long,greater<>>q1;
    for (long long i = 0; i < m; ++i) {
        for (long long j = 0; j < n; ++j) {
            q.insert(arr[j][i]);
        }
        int a=0;
        for(auto it:q){
            q1.insert(it);
            if(i==a)
                break;
            a++;
        }
        q.clear();
    }

    for(auto it:q1){
        if(k>0){
            if(it>0)
            sum+=it;
        }
        else
            break;
        k--;
    }
cout<<sum;
}
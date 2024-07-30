#include <iostream>
#include <deque>//deque
using namespace std;
int main(){
    int t;
    cin>>t;
    bool rev= false ;
    string s;
    deque<int>q1;
    while (t--)
    {
        int x;
        cin>>s;

        if(s=="push_back") {
            cin >> x;
            if (!rev)
                q1.push_back(x);
            else
                q1.push_front(x);
        }

        else if(s=="toFront"){
            cin>>x;
            if (!rev)
                q1.push_front(x);
            else
                q1.push_back(x);
        }

        else if(s=="back"){
            if(q1.empty()==0){

                if (!rev){
                    cout<<q1.back()<<"\n";
                    q1.pop_back();
                }
                else {
                    cout << q1.front() << "\n";
                    q1.pop_front();
                }

            }
            else
                cout<<"No job for Ada?\n";
        }

        else if(s=="front"){
            if(q1.empty()==0){
                if (!rev){
                    cout << q1.front() << "\n";
                    q1.pop_front();
                }
                else {
                    cout<<q1.back()<<"\n";
                    q1.pop_back();
                }
            }
            else
                cout<<"No job for Ada?\n";

        }

        else if(s=="reverse"){
            rev=!rev;
        }

    }
}

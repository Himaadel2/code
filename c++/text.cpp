#include <iostream>
using namespace std;
double corr(double array[], int g, int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    double m = sum / n;
    double s1 = 0.0, s2 = 0.0;
    for (int i = g; i < n; i++)
    {
        s1 += (array[i] - m) * (array[i - g] - m);
        s2 += (array[i] - m) * (array[i] - m);
    }
    double aut = s1 / s2;
    return aut;
}
int main()
{
    double y[6] = {3.5, 12.1, 9.8, 9.9, 10.2, 13.2};
    int g = 3;
    cout << "reslut is : " << corr(y, g, 6);
}





































#include <iostream>
using namespace std;
class stack{
private:
    static const int max = 10000;
    int top;
public:
    char item[max];
    stack(){
        top = -1;
    }
    void push(char v){
        if(isFull())
            cout << "Stack Overflow";
        else{
            item[++top] = v;
        }
    }
    int pop(){
        if(isEmpty())
            cout << "Stack Underflow";
        else
            return item[top--];
    }
    int peek(){
        if(isEmpty())
            cout << "Stack Underflow";
        else
            return item[top];
    }
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == max-1;
    }

};
bool is_balanced(string s) {
    stack st;
    for (char c : s) {
        if (c == '(')
            st.push(c);
        else if (c == ')') {
            if (st.isEmpty())
                return false;
            st.pop();
        }
    }
    return st.isEmpty();
}

int main() {
    string s;
    cout<<"enter string from ():\n";
    cin>>s;
    if(is_balanced(s))
        cout<<"balanced";
    else
        cout<<"not balanced";
}





















//    int t,z,c1=0,c2=0;
//    cin>>t;
//    z=t;
//    vector <int>v;
//    int num1[5]={10,20,30,40,50};
//    for(int x : num1)
//    {
//        cin>>x;
//    }
//    while (z--) {
//        if(q1.empty()==0) {
//            if (q1.front() > q1.back()) {
//                c1 += q1.front();
//                q1.pop_front();
//            } else {
//                c1 += q1.back();
//                q1.pop_back();
//            }
//            if (q1.front() > q1.back()) {
//                c2 += q1.front();
//                q1.pop_front();
//            } else {
//                c2 += q1.back();
//                q1.pop_back();
//            }
//        }
//        else
//            break;
//    }
//    cout<< c1<<" "<<c2;
//      int x=5;
//      if(x==5|x==6){
//          cout<<"yes";
//      }

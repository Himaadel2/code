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

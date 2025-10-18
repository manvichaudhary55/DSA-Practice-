#include<iostream>
#include <stack>
#include <utility>
#include <algorithm>
using namespace std;

class MinStack{
    std :: stack<pair<int,int>> st;
public:

    void pushSt(int val){
        if(st.empty()){
            st.push({val,val});
        }
        else{
            st.push({val,min(val,st.top().second)});
        }
    }

    int getMin(){
        if(st.empty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        else{
            return st.top().second;
        }
    }

    void popSt(){
        if(st.empty()){
            cout << "Stack empty nothing to pop" << endl;
            return;
        }
        else{
            st.pop();
        }
    }

    int topSt(){
        if(st.empty()){
            cout << "Stack empty nothing to pop" << endl;
            return -1;
        }
        else{
            return st.top().first;
        }
    }
};

int main(){
    MinStack s;

    s.pushSt(3);
    s.pushSt(5);
    cout << "top: " << s.topSt() << ", min: " << s.getMin() << endl; // 5,3

    s.pushSt(2);
    s.pushSt(2);
    cout << "top: " << s.topSt() << ", min: " << s.getMin() << endl; // 2,2

    s.popSt();
    cout << "after pop -> top: " << s.topSt() << ", min: " << s.getMin() << endl;

    s.popSt();
    cout << "after pop -> top: " << s.topSt() << ", min: " << s.getMin() << endl;

    // empty the stack
    s.popSt();
    s.popSt();
    cout << "empty? " << (s.getMin() == -1 ? "yes" : "no") << endl;

    return 0;
}
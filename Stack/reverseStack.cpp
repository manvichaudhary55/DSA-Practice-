#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }

    int topElem =  s.top();
    s.pop();
    insertAtBottom(s,value);

    //BT
    s.push(topElem);
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int topElem = s.top();
    s.pop();
    reverseStack(s);

    insertAtBottom(s,topElem);
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);



    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    


    return 0;
}
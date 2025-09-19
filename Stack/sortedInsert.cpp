#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &s,int value){

    //Edge case 
    if(s.empty()){
        s.push(value);
        return;
    }

    if(!s.empty() && s.top()<value){
        s.push(value);
        return;
    }

    int topElem = s.top();
    s.pop();
    sortedInsert(s,value);

    //BT
    s.push(topElem);
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int value = 23;

    sortedInsert(s,value);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    


    return 0;
}
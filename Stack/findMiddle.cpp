#include<iostream>
#include<stack>
using namespace std;

//--------------------Recursive---------------------
// void printMiddle(stack<int> &s,int count){
//     if(count == 0){
//         cout << s.top() << endl;
//         return;
//     }

//     int topElem = s.top();
//     s.pop();
//     //recursion
//     printMiddle(s,count-1);

//     //backtracking
//     s.push(topElem);

// }

// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     int count = s.size()/2;

//     printMiddle(s,count);

//     return 0;
// }

void printMiddle2Stack(stack<int> &s,int count){
    stack<int> s1;
    for(int i = 0;i<count;i++){
        int elem = s.top();
        s.pop();
        s1.push(elem);
    }

    cout << "Top elem is :" << s.top() << endl;

    while(!s1.empty()){
        int elem = s1.top();
        s1.pop();
        s.push(elem);
    }
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int count = s.size()/2;

    printMiddle2Stack(s,count);

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
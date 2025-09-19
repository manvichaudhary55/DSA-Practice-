#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// void reverse(queue<int> &q){
//     stack<int> st;

//     while(!q.empty()){
//         int elem = q.front();
//         q.pop();
//         st.push(elem);
//     }

//     while(!st.empty()){
//         int elem = st.top();
//         st.pop();
//         q.push(elem);
//     }
// }

void reverseRecursive(queue<int> &q){
    if(q.empty()){
        return;
    }

    int elem = q.front();
    q.pop();
    reverseRecursive(q);

    q.push(elem);

}

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverseRecursive(q);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
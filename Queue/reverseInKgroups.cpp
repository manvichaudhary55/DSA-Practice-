#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseInK(queue<int> &q,int k,int size){
    if(size>=k){
        stack<int> st;

        for(int i =0;i<k;i++){
            int elem = q.front();
            q.pop();

            st.push(elem);
        }

        for(int i = 0;i<k;i++){
            int elem = st.top();
            st.pop();
            q.push(elem);
        }

        reverseInK(q,k,size-k);
    }   
    else{
        for(int i = 0;i<size;i++){
            int elem = q.front();
            q.pop();
            q.push(elem);
        }
    }
}

int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);

    int size = q.size();
    reverseInK(q,3,size);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
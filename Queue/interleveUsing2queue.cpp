#include<iostream>
#include<queue>
using namespace std;

void interleave(queue<int> &q){
    int size = q.size();

    queue<int> q1;

    for(int i =0;i<size/2;i++){
        int elem = q.front();
        q.pop();
        q1.push(elem);
    }


    for(int i =0;i<size/2;i++){
        int elem1 = q1.front();
        q1.pop();
        q.push(elem1);

        int elem2 = q.front();
        q.pop();
        q.push(elem2);
    }
}

int main(){

    queue<int> q;
    q.push(20);
    q.push(40);
    q.push(80);
    q.push(10);
    q.push(30);
    q.push(50);

    interleave(q);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int val){
            data = val;
            next = NULL;
        }
};

class queue{
    public:
        Node* front;
        Node* end;
        int sz;

    public:
        queue(){
            front = end = NULL;
            sz = 0;
        }

    void push(int data){
        if(front == NULL && end == NULL){
            Node* newNode = new Node(data);
            front = end = newNode;
        }
        else{
            Node* newNode = new Node(data);
            end->next = newNode;
            end = newNode;
        }
        sz++;
    }

    void pop(){
        if(front == NULL && end == NULL){
            cout << "Queue empty nothing to pop" << endl;
            return; 
        }
        if(front == end){
            Node* temp = front;
            front = end = NULL;
            delete temp;
        }
        else{
            Node* temp = front;
            front = front->next;
            delete temp;
        }

        sz--;
    }

    void top(){
        if(front == NULL && end == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        else{
            int topp = front->data;
            cout << "front elem is : " << topp << endl;
        }
    }

    int frontElem(){
        if(front == NULL) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    int size(){
        return sz;
    }

    bool empty(){
        return sz == 0;
    }
};

int main(){
    queue q;

    // push elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.frontElem() << endl;
    cout << "Size: " << q.size() << endl;

    // pop one element
    q.pop();
    cout << "After pop, front: " << q.frontElem() << endl;
    cout << "Size: " << q.size() << endl;

    // pop remaining
    q.pop();
    q.pop();

    cout << "Empty? " << (q.empty() ? "yes" : "no") << endl;

    // pop on empty to show message
    q.pop();

    return 0;
}
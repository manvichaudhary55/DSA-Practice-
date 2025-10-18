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

class Stack{
    public:
        Node* top;
        int sz;

    // constructor
    Stack() {
        top = NULL;
        sz = 0;
    }

    //Insert at head 
    void push(int val){
        Node* newNode = new  Node(val);
        newNode->next = top;
        top = newNode;
        sz++;
    }

    void pop(){
        if(top == NULL){
            cout << "UnderFlow" << endl;
            return;
        }

        Node* temp = top;
        top =  top->next;
        delete temp;
        sz--;
    }

    int topElem(){
        if(top == NULL){
            cout << "UnderFlow" << endl;
            return -1;
        }

        return top->data;
    }

    int getSize(){
        return sz;
    }

    void printSize(){
        cout << "The size is :" << sz << endl;
    }
};

int main(){
    Stack st;

    // push some elements
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.topElem() << endl;
    st.printSize();

    // pop one
    st.pop();
    cout << "After pop, top: " << st.topElem() << endl;
    cout << "Size (from getSize): " << st.getSize() << endl;

    // empty the stack
    st.pop();
    st.pop();
    // pop on empty to show UnderFlow handling
    st.pop();

    return 0;
}
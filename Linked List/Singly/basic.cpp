#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node *next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

int main(){

    // //Stack
    // Node first(10);
    // cout << first.data;

    //Dynamic Memory 
    Node *first = new Node(20);
    cout << first->data << endl;
    cout << first->next << endl;

    return 0;
    
}
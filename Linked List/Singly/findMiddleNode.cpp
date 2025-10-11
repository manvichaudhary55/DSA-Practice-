#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};


void insertAtHead(int value,Node* &Head,Node* &Tail){
    //LL is empty
    if(Head==NULL && Tail==NULL){
    //Step 1)Create new node 
    Node *newNode = new Node(value);
    //Step 2)
    Head = newNode;
    //Step 3)
    Tail = newNode;
    }

    else{
        //1->Create new node
        Node *newNode = new Node(value);
        //2->Point new node to next node 
        newNode->next = Head;
        //3->Change the position of head 
        Head = newNode;
    }
}


int length(Node* Head){
    Node* temp = Head;
    int count = 0 ;

    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}


void printMiddleNode(Node* &Head){

    int len = length(Head);
    int noOfIteration = len/2;

    Node* temp = Head;

    for(int i = 0;i<noOfIteration;i++){
        temp = temp->next;
    }

    cout <<"Middle Node is "<< temp->data << endl;
}


void print(Node* Head){

    Node* temp = Head;

    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}


int main(){

    Node* Head = NULL;
    Node* Tail = NULL;

    
    insertAtHead(10,Head,Tail);
    insertAtHead(20,Head,Tail);
    insertAtHead(30,Head,Tail);

    print(Head);

    printMiddleNode(Head);
    return 0;

}
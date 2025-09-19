#include <iostream>
using namespace std;


class Node{
    
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int value){
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }

};


void insertAtHead(int value,Node* &head,Node* &tail){
    
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }

    else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(int value,Node* &head,Node* &tail){
    
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail =  newNode;
    }
    else{
        Node* newNode = new Node(value);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode; 
    }
}

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;

    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(int pos,int value,Node* &head,Node* &tail){
    int length = getLength(head);
    if(pos==1){
        insertAtHead(value,head,tail);
    }
    else if(pos==length+1){
        insertAtTail(value,head,tail);
    }
    else{
        Node* newNode = new Node(value);
        Node* temp = head;

        for(int i = 0;i<pos-2;i++){
            temp = temp->next;
        }

        Node* forward = temp->next;
        
        newNode->next = forward;
        temp->next = newNode;
        forward->prev = newNode;
        newNode->prev = temp;
        
    }
}

//By position
void delelteLL(int position,Node* &head,Node* &tail){
    int len = getLength(head);
    if(head==NULL && tail==NULL){
        cout << "Linked List is empty Nothing to delete" << endl;
    }
    //Single Linked List
    else if(head==tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }   
    //Linked List is not empty 
    else{

        if(position==1){
            Node* temp = head;
            head = temp->next;
            head->prev = NULL;
            temp->next = NULL;
        }


        else if(position == len){
            Node * temp = head;

            for(int i = 0;i<position-2;i++){
                temp = temp->next;
            }
            Node* nodeToDelete = temp->next;

            temp->next = NULL;
            nodeToDelete->prev = NULL;

            delete nodeToDelete;
        }


        else{
            Node* temp = head;

            for(int i = 0;i<position-2;i++){
                temp = temp->next;
            }
            Node* nodeTodelete = temp->next;
            Node* forward = nodeTodelete->next;

            temp->next = forward;
            forward->prev = temp;
            nodeTodelete->next = NULL;
            nodeTodelete->prev = NULL;

            delete nodeTodelete;
        }
    }
}


void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout <<"NULL";
}

void printRev(Node* &tail){
    Node* temp  = tail;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout <<"NULL";
    
}

bool search(int target,Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    //Insertion
    insertAtHead(30,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(10,head,tail);

    // print(head);
    // printRev(tail);
    // cout << endl;

    insertAtTail(40,head,tail);
    // print(head);
    cout << endl;

    insertAtPosition(3,100,head,tail);
    print(head);
    cout << endl;

    // cout <<search(30,head)<<endl;
    delelteLL(1,head,tail);
    print(head);
    cout << endl;

    delelteLL(4,head,tail);
    print(head);
    cout << endl;
    return 0;
}
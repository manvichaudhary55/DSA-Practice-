#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


//Returns the head of the new inserted node 
Node* insertAtHead(int value,Node* &Head,Node* &Tail){
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
    return Head;
}

Node* insertAtTail(int value, Node* &Head , Node* &Tail){
    if(Head==NULL && Tail==NULL){
        Node* newNode = new Node(value);
        Head = newNode;
        Tail = newNode;
    }
    
    else{
        Node* newNode = new Node(value);
        Tail->next = newNode;
        Tail = newNode;
    }
    return Head;
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


void insertAtPosition(int pos,int value,Node* &Head,Node* &Tail){
    //Assume Valid Pos

    int len = length(Head);

    if(pos==1){
        Head = insertAtHead(value,Head,Tail);
    }
    else if(pos==len+1){
        Head = insertAtTail(value,Head,Tail);
    }
    else{
        Node* temp = Head;
        Node* newNode = new Node(value);

        for(int i = 0;i<pos-2;i++){
            temp =  temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

//H.W. -> delete by value 
void deleteLL(int pos,Node* &Head,Node* &Tail){
    //Empty Linked List
    if(Head==NULL && Tail==NULL){
        cout << "Linked List is empty cannot delete" << endl;
    }
    //Single LL is available
    else if(Head==Tail){
        Node* temp = Head;
        Head = NULL;
        Tail = NULL;
        delete temp;
    }

    //anywhere in between
    else{
        if(pos==1){
            Node* temp = Head;
            Head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            Node* temp = Head;

            for(int i = 0 ; i<pos-2 ; i++){
                temp = temp->next;
            }

            Node* nodeTodelete = temp->next;
            temp->next = nodeTodelete->next;
            nodeTodelete->next = NULL;
            delete nodeTodelete;
        }
    }
}

void deleteLLByValue(int value,Node* &head,Node* &tail){
    //LL is empty
    if(head == NULL && tail == NULL){
        cout << "The LL is empty Nothing to delete" << endl;
    }

    //Single Node in LL
    else if(head == tail && value == head->data){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }

    //Multiple Nodes in LL
    else{
        //value is at first node only
        if(head->data == value){
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        
        //value is anywhere in between 
        else{
            Node* temp = head;

            while (temp->next != NULL && temp->next->data != value) {
                temp = temp->next;
            }


            if (temp->next == NULL) {
            cout << "Value not found in the list" << endl;
            return;
            }

            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            nodeToDelete->next = NULL;

            if (nodeToDelete == tail) {
            tail = temp;
            }
            
            delete nodeToDelete;
            
        }
    }
}

void print(Node* Head){
    Node* temp = Head;

    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//H.W. -> return exact pos
bool search(int target,Node* &Head){
    Node* temp = Head;
    while(temp!=NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){

    Node *Head = NULL;
    Node *Tail = NULL;

    Head = insertAtHead(10,Head,Tail);
    Head = insertAtHead(20,Head,Tail);
    Head = insertAtHead(30,Head,Tail);

    // print(Head);

    // Head = insertAtTail(10, Head, Tail);
    // Head = insertAtTail(20, Head, Tail);
    // Head = insertAtTail(30, Head, Tail);

    // print(Head);

    // cout << length(Head) << endl;

    insertAtPosition(1,100,Head,Tail);
    insertAtPosition(5,200,Head,Tail);
    insertAtPosition(3,300,Head,Tail);
    print(Head);
    cout << endl;

    // cout << search(100,Head);

    // deleteLL(4,Head,Tail);
    // print(Head);

    deleteLLByValue(200,Head,Tail);
    print(Head);



    return 0;
}
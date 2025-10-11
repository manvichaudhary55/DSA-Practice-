#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* insertAtHead(Node* head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

Node* deleteHead(Node* head){
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
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
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        // If only one node, delete it and return NULL
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

Node* deleteAtPosition(Node* head,int k){
    int len = length(head);
    if(head == NULL || k > len || k <= 0){
        return head;
    }
    if(k == 1){
        head = deleteHead(head);
        return head;
    }
    if(k == len){
        head = deleteTail(head);
        return head;
    }
    int count = 0;
    Node* prev = NULL;
    Node* temp = head;
    while(temp != NULL){
        count++;
        if(count == k){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


Node* deleteAtValue(Node* head,int val){

    if(head == NULL){
        return head;
    }
    if(head->data == val){
        head = deleteHead(head);
        return head;
    }

    Node* prev = NULL;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* insertAtTail(Node* head,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
    }

    Node* temp = head;
    //traverse to the last node 
    while(temp->next!=NULL){
        temp = temp->next;
    }

    Node* newNode =  new Node(data);
    temp->next = newNode;

    return head;
}

Node* insertAtPosition(Node* head,int data,int k){
    if(head == NULL){
        if(k == 1){ 
            head = new Node(data);
            return head; 
        }
        //if not for the first position 
        else{
            return head;
        }
    }

    if(k==1){
        head = insertAtHead(head,data);
        return head;
    }

    int count = 0;
    Node* temp = head;

    while(temp!=NULL){
        count++;

        if(count == k-1){
            Node* newNode = new Node(data);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        else{
        temp = temp->next;
        }
    }
    return head;
}

Node* insertBeforeVal(Node* head,int data,int val){
    if(head == NULL){
        //How the hell is the val given then 
        return NULL;
    }

    if(head->data == val){
        head = insertAtHead(head,data);
        return head;
    }


    Node* temp = head;

    while(temp->next!=NULL){

        if(temp->next->data == val){
            Node* newNode = new Node(data);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        else{
        temp = temp->next;
        }
    }
    return head;
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
    Node* head = new Node(10);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);
    head = insertAtHead(head,40);
    head = insertAtHead(head,50);

    // Uncomment to test deleteHead
    // head = deleteHead(head);

    // head = deleteTail(head);


    print(head);

    // head = deleteAtPosition(head,3);
    // print(head);

    // head = deleteAtValue(head,40);
    // print(head);


    // head = insertAtTail(head,60);
    // print(head);

    head = insertAtPosition(head ,100,3);
    print(head);
    return 0;
}
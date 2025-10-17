#include <iostream>
#include <vector>
using namespace std;

struct Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* Head) {
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* insertHead(Node* head,int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;   // fix the back link
    }
    head = newNode;

    return head;
}

Node* insertTail(Node* head,int data){
    if(head == NULL){
        Node* newNode = new  Node(data);
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        Node* newNode = new Node(data);
        temp->next = newNode;
        newNode->prev = temp;
    }
    return head;
}

Node* insertBeforeValue(Node* head,int val,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
    }
    else if(head->data == val){
        head = insertHead(head,data);
    }
    else{
        Node* temp = head;
        while (temp != NULL && temp->data != val) {
        temp = temp->next;
        }
        
        if(temp == NULL){
            cout << "Value not found" << endl;
            return head;
        }

        Node* newNode = new Node(data);
        Node* before = temp->prev;
        before->next = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        newNode->prev = before;
    }

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

Node* insertbeforeKth(Node* head,int k,int data){
    int len = length(head);
    if(head == NULL || k<=0 || k>len){
        return head;
    }
    else if(head->next == NULL && k == 1){
        head = insertHead(head,data);
        return head;
    }
    else{
        Node* temp = head;
        int i = 0;
        while(temp!= NULL && i<k-1 ){
            temp = temp->next;
            i++;
        }
        Node* before = temp->prev;
        Node* newNode = new Node(data);

        before->next = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        newNode->prev = before;
        return head;
    }
}

int main(){
    Node* head = NULL;
    head = insertHead(head,10);
    head = insertHead(head,20);
    head = insertHead(head,30);
    head = insertHead(head,40);
    print(head);

    head = insertTail(head,100);
    print(head);

    head = insertBeforeValue(head,20,200);
    print(head);
    head = insertbeforeKth(head,4,300);
    print(head);

    return 0;
}
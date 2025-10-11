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

int length(Node* Head){
    Node* temp = Head;
    int count = 0 ;

    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}
void print(Node* Head) {
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* insert(Node* head,int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;   // fix the back link
    }
    head = newNode;

    return head;
}

Node* deleteAtHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* nodeToDelete = head;
    head = head->next;
    head->prev = NULL;
    nodeToDelete->next = NULL; 
    delete nodeToDelete;

    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }

    Node* back = temp->prev;

    back->next = NULL;
    temp->prev = NULL;
    delete temp;

    return head;
}

Node* deleteKthPosition(Node* head,int k){
    int len = length(head);
    if(head == NULL || k<=0 || k>len){
        return head;
    }
    if(k == 1){
        head = deleteAtHead(head);
        return head;
    }
    else if(k == len){
        head = deleteTail(head);
        return head;
    }

    Node* temp = head;
    int count = 0;

    while(temp != NULL){
        count++;

        if(count == k){
            Node* back = temp->prev;
            Node* front = temp->next;
            back->next = front;
            front->prev = back;
            delete temp;
            break;
        }
        temp = temp->next;
    }

    return head;
}

Node* deleteByValue(Node* head,int val){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        head = deleteAtHead(head);
        return head;
    }

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            Node* back = temp->prev;
            Node* front = temp->next;
            back->next = front;
            if (front != NULL) {
            front->prev = back;
            }
            delete temp;
            break;
        }
        temp = temp->next;
    }

    return head;
}

void deleteByNode(Node* nodeToDelete){
    //head will never be given to delete this way
    Node* back = nodeToDelete->prev;
    Node* front = nodeToDelete->next;

    //Edge case 
    if(front == NULL){
        back->next = NULL;
        nodeToDelete->prev = NULL;
        delete nodeToDelete;
        return;
    }

    back->next = front;
    front->prev = back;
    return;
}

int main(){
    Node * head = NULL;

    head = insert(head,10);
    head = insert(head,20);
    head = insert(head,30);
    head = insert(head,40);
    head = insert(head,50);

    print(head);

    // head = deleteAtHead(head);

    // print(head);

    // head = deleteTail(head);

    // print(head);

    // head = deleteKthPosition(head,2);
    // print(head);

    head = deleteByValue(head,20);
    print(head);

    deleteByNode(head->next);
    print(head);

    return 0;
}
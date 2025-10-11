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

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};

    Node* head = new Node(arr[0]);
    Node* temp = head;

    int n = arr.size();
    for (int i = 1; i < n; i++) {   // start from 1
        Node* newNode = new Node(arr[i]);
        newNode->prev = temp;
        temp->next = newNode;
        temp = newNode;
    }

    print(head);

    return 0;
}

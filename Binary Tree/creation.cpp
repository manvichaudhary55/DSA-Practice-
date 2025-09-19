#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createNode() {
    int value;
    cout << "Enter the data for node: ";
    cin >> value;

    if (value == -1) {
        return NULL;
    }

    Node* root = new Node(value);
    cout << "Making node for left of " << value << endl;
    root->left = createNode();
    cout << "Making node for right of " << value << endl;
    root->right = createNode();

    return root;
}

int main() {
    Node* root = createNode();

    if (root) {
        cout << "Root Node: " << root->data << endl;
    } else {
        cout << "Tree is empty." << endl;
    }

    return 0;
}

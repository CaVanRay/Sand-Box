#include <bits/stdc++.h>
using namespace std;

class Node {
    private:
    int data;      // the value
    Node* next;    // pointer to the next node
    
    public:
        Node(int val) : data(val), next(nullptr) {}
        int getData() const { return data; }
        Node* getNext() const { return next; }
        void setNext(Node* newNext) { next = newNext; }
};

void printList(Node* n) {
    while (n != nullptr) {
        cout << n->getData() << " ";
        n = n->setNext();
    }
    cout << endl;
}


int main() {
    // Create nodes
    Node* head = new Node(10);   // first node
    Node* second = new Node(20); // second node
    Node* third = new Node(30);  // third node

    // Assign values
    //head->data = 10;
    head->setNext() = second;

    //second->data = 20;
    second->setNext() = third;

    //third->data = 30;
    third->setNext() = nullptr; // end of list

    printList(head);
    
    return 0;
}

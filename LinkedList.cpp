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
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


int main() {
    // Create nodes
    Node* head = new Node();   // first node
    Node* second = new Node(); // second node
    Node* third = new Node();  // third node

    // Assign values
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr; // end of list

    printList(head);
    
    return 0;
}

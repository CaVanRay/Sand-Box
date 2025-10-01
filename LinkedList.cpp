#include<iostream>


using namespace std;

struct Node {
    int data;      // the value
    Node* next;    // pointer to the next node
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

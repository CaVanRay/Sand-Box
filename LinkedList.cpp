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

void printFrontToBack(Node* n) {
    while (n != nullptr) {
        cout << n->getData() << " ";
        n = n->getNext();
    }
    cout << endl;
}

void printBackToFront(Node*, Node*, Node*);


int main() {
    // Create nodes
    Node* head = new Node(10);   // first node
    Node* second = new Node(20); // second node
    Node* third = new Node(30);  // third node

    // Assign values
    //head->data = 10;
    head->setNext(second);

    //second->data = 20;
    second->setNext(third);

    //third->data = 30;
    third->setNext(nullptr); // end of list

    printFrontToBack(head);
    printBackToFront(head, second, third);
    printFrontToBack(third);
    
    cout << endl << "Now which item do you want to change? head | second | third :" ;
    string changeItem;
    
    return 0;
}

void printBackToFront(Node* head, Node* second, Node* third) {

    head->setNext(nullptr);

    second->setNext(head);

    third->setNext(second);
    
}

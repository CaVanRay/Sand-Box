
// outdated - all further updates found in [Car-Catalogue/Car-Catalogue1.cpp]

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
        void setData(int newData) {data = newData;}
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
    
    cout << endl << "Now which item do you want to change? head | second | third :" ;
    string changeItem;
    cin >> changeItem;
    cout << endl << "Now input new number for item " << changeItem << " :";
    int amount;
    cin >> amount;

    if(changeItem == "head"){
        head->setData(amount);
    }else if(changeItem == "second"){
        second->setData(amount);
    }else if(changeItem == "third"){
        third->setData(amount);
    }else{
        cout << endl << "Sorry, I couldn't find item " << changeItem << " but " << amount << " is my favorite number! ";
    }

    printFrontToBack(head);
    printBackToFront(head, second, third);
    
    return 0;
}

void printBackToFront(Node* head, Node* second, Node* third) {

    head->setNext(nullptr);

    second->setNext(head);

    third->setNext(second);
    
    printFrontToBack(third);
    
    third->setNext(nullptr);
    
    second->setNext(third);
    
    head->setNext(second);
    
}

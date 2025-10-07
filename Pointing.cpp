#include <iostream>

using namespace std;

struct Node{
int data;
Node* next;

Node(int val) : data(val), next(nullptr) {}
};

void addAtHead(Node* &head, int val){
  Node* newNode = new Node(val);
  newNode->next = head;
  head = newNode;
}

void addAtTail(Node* &head, int val) {}

int main() {

  int num1;
  double num2;
  char letter;
  string letters;

  int* Pnum1 = &num1;
  double* Pnum2 = &num2;
  char* Pletter = &letter;
  string* Pletters = &letters;

  cout << endl << "Give me a number: ";
  cin >> num1;
  cout << endl << "Give me a bigger number: ";
  cin >> num2;
  cout << endl << "Give me a letter: ";
  cin >> letter;
  cout << endl << "Give me a word: ";
  cin >> letters;
  
  cout << endl << "OK using only the pointers I made: " << endl << endl;
  cout << "Pnum1 = num1 = " << Pnum1 << " = " << *Pnum1 << endl;
  cout << "Pnum2 = num2 = " << Pnum2 << " = " << *Pnum2 << endl;
  cout << "Pletter = letter = " << Pletter << " = " << *Pletter << endl;
  cout << "Pletters = letters = " << Pletters << " = " << *Pletters << endl;

  Node* head = nullptr;
  
  return 0;
}

#include <iostream>

using namespace std;

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

  
  return 0;
}

#include<iostream>

using namespace std;

int main () {

int number1, number2;

  cout << "pick a number" << endl << "  :";
  cin >> number1;
  cout << endl << endl << "Pick another number" << endl << "  :";
  cin >> number2;

  cout << endl << endl << "The biggest number is " << ((number1 > number2) ? number1 : number2);


  return 0;
}

#include <iostream>

using namespace std;

int main() {

  char cont = Y;

  while(toupper(cont) == Y) {

    int items;
    cout << "How many items would you like to store? : " ;
    cin >> items;


    cout << "Would you like to continue? Y/N" << endl << endl;
    cin >> cont;
  }

  return 0;
}

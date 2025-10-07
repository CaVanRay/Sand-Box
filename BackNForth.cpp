#include <iostream>

using namespace std;

int main() {

  char cont = Y;

  while(toupper(cont) == Y) {



    cout << "Would you like to continue? Y/N" << endl << endl;
    cin >> cont;
  }

  return 0;
}

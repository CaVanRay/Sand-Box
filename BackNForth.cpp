#include <iostream>

using namespace std;

struct ListItem{

}

int main() {

  char cont = 'Y';

  while(toupper(cont) == 'Y') {

    int items;
    cout << "How many items would you like to store? : " ;
    cin >> items;
    
    for(int i = 0; i < items; i++){
      
    }

    cout << "Would you like to continue? Y/N" ;
    cin >> cont;
  }

  return 0;
}

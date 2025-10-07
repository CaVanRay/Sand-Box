#include <iostream>

using namespace std;

int main(){

    char cont = 'Y';
  
    while(toupper(cont) == 'Y'){

      
      cout << "Do you want to continue? Y/N :";
      cin >> cont;
    }
    
  return 0;
}

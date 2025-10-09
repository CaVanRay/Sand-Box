#include<iostream>

using namespace std;

int main(){

  int cup1 = 1, cup2 = 2, cup3 = 3;
  int* ball = &cup2;
  char answer = 'Y';
  
  while(toupper(answer) == 'Y'){


    cout << endl << endl << "Would you like to continue? (Y/N): " ;
    cin >> answer;
  }
  
  
  return 0;
}

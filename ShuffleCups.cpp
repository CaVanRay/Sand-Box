#include<iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main(){
    
  srand(time(0));
  int cup[1] = 1, cup[2] = 2, cup[3] = 3;
  int* ball = &cup2;
  char answer = 'Y';
  
  while(toupper(answer) == 'Y'){
    
    int randomNumber = (rand() % 3) + 1;
    ball = &cup[randomNumber];
    cout << endl << endl << "The Ball is located in cup " << *ball ;
    
    cout << endl << endl << "Would you like to continue? (Y/N): " ;
    cin >> answer;
  }
  
  
  return 0;
}

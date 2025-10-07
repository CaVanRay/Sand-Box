#include <iostream>

using namespace std;

int main(){

  // I need to practice with pointers

  int PotOGold;
  int* EndOfRainbow;
  EndOfRainbow = &PotOGold;

  PotOGold = 999;
  
  cout << "At the end of the rainbow theres a pot of " << *EndOfRainbow << " peices of gold!" << endl;
  
  return 0;
}

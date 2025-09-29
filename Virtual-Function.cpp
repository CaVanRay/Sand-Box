#include<iostream>
using namespace std;

class Instrument {

public:
  void MakeSound(){
    cout << "Instrument playing...\n";
    
  }

};

int main() 
{
  Instrument i1;
  i1.MakeSound();

  system ("pause>0");
}

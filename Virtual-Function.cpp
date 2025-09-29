#include<iostream>
using namespace std;

class Instrument {

public:
  virtual void MakeSound() = 0;
};

class Accordion:public Instrument {
  void MakeSound(){
    cout << "Accordion playing...\n";    
  }
};

class Piano :public Instrument{
void MakeSound(){
  cout << "Piano playing...\n";
}
};

int main() 
{
  Instrument* i1 = new Accordion();
  i1->MakeSound();

    Instrument* i2 = new Piano();
  i2->MakeSound();

  return 0;
}

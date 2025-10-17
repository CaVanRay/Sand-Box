#include <iostream>

class car{

  private:
  std::string Owner;
  std::string Model;
  std::string Vin;
  int Mileage;
  int MPG;

  public:
  // First the Setters
  void SetOwner(){};

  void SetModel(){};

  void SetVin(){};

  void SetMileage(){};

  void SetMPG(){};
  
};

int main(){
  char cont = "Y";
  do{


    std::cout << std::endl << std::endl << "Continue? (Y/N) :" 
    std::cin >> cont;
  }while(toupper(cont)=='Y';
  
  return 0;
}

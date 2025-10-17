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

  // Next the Getters
  std::string GetOwner(){};

  std::string GetModel(){};

  std::string GetVin(){};

  int GetMileage(){};

  int GetMPG(){};

};

int main(){
  char cont = "Y";
  do{


    std::cout << std::endl << std::endl << "Continue? (Y/N) :" 
    std::cin >> cont;
  }while(toupper(cont)=='Y';
  
  return 0;
}

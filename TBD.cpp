#include <iostream>

class car{

  private:
  std::string Owner;
  std::string Model;
  std::string Vin;
  int Mileage;
  int MPG;
  car* prev;
  car* Next;

  public:
  // First the Setters
  void SetOwner(){};

  void SetModel(){};

  void SetVin(){};

  void SetMileage(){};

  void SetMPG(){};

  // Next the Getters
  std::string GetOwner(){
    return Owner;
  };

  std::string GetModel(){
    return Model;
  };

  std::string GetVin(){
    return Vin;
  };

  int GetMileage(){
    return Mileage;
  };

  int GetMPG(){
    return MPG;
  };

};

int main(){
  char conti;
  do{


    std::cout << std::endl << std::endl << "Continue? (Y/N) :" ;
    std::cin >> conti;
  }while(toupper(conti)== 'Y');
  
  return 0;
}

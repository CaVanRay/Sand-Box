#include <iostream>

class car{

  private:
  std::string Owner;
  std::string Model;
  std::string Vin;
  int Mileage;
  int MPG;
  car* Prev;
  car* Next;

  public:
  // First the Setters
  void SetOwner(std::string newOwner){
    Owner = newOwner;
  };
  void SetModel(std::string newModel){
    Model = newModel;
  };
  void SetVin(std::string newVin){
    Vin = newVin;
  };
  void SetMileage(int newMileage){
    Mileage = newMileage;
  };
  void SetMPG(int newMPG){
    int MPG = newMPG;
  };
  void SetPrev(car* newPrev){
    Prev = newPrev;
  };
  void setNext(car* newNext){
    Next = newNext;
  };
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

  car* GetPrev(){
    return Prev;
  };

  car* GetNext(){
    return Next;
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

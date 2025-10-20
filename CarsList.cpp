#include <iostream>
#include <vector>
#include <limits>

//***********************************************************************
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
      MPG = newMPG;
    };
    void SetPrev(car* newPrev){
      Prev = newPrev;
    };
    void SetNext(car* newNext){
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
//***********************************************************************
void printCatalogue(car* n) {
    while (n != nullptr) {
        std::cout << std::endl << "***************************************" << std::endl;
        std::cout << "Owner: " << n->GetOwner() << std::endl;
        std::cout << "Model: " << n->GetModel() << std::endl;
        std::cout << "VIN# : " << n->GetVin() << std::endl;
        std::cout << "Miles: " << n->GetMileage() << std::endl;
        std::cout << "MPG  : " << n->GetMPG() << std::endl;
        n = n->GetNext();
    }
    std::cout << std::endl;
}
//***********************************************************************
int main(){
  char conti;
  car* head = nullptr;
  std::vector<car*> carCatalogue;
  size_t numberOfCars;
  do{
    
      std::string Owner;
      std::string Model;
      std::string Vin;
      int Mileage;
      int MPG;
    //***********************************************************************
      std::cout << std::endl << "Please Add a vehical to the catalogue" << std::endl << std::endl;
      
      std::cout << "input car owner: ";
      std::getline(std::cin, Owner);
      
      
      std::cout << std::endl << "input car model: ";
      std::getline(std::cin, Model);
      
      
      std::cout << std::endl << "input car vin#: ";
      std::getline(std::cin, Vin);
      
      
      std::cout << std::endl << "input car mileage: ";
      std::cin >> Mileage;
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      
      
      std::cout << std::endl << "input car MPG: ";
      std::cin >> MPG;
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      //***********************************************************************
    
      // Check for a head, it there isn't one create one, if there is one check array of pointers for size and then append new car to the end

      car* newCar = new car();
      newCar->SetOwner(Owner);
      newCar->SetModel(Model);
    
      /*
      carCatalogue[n].SetOwner(Owner);
      carCatalogue[n].SetModel(Model);
      carCatalogue[n].SetVin(Vin);
      carCatalogue[n].SetMileage(Mileage);
      carCatalogue[n].SetMPG(MPG);
      
      if( head == nullptr){
        head = &carCatalogue[n];
      }else{
        carCatalogue[n].SetPrev(&carCatalogue[n-1]);
        carCatalogue[n-1].SetNext(&carCatalogue[n]);
      }
      */
      
      std::cout << std::endl << std::endl << "Continue? (Y/N) :" ;
      std::cin >> conti;
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }while(toupper(conti)== 'Y');

  std::cout << std::endl << "Now please feel free to peruse the catalogue: " << std::endl;
  printCatalogue(head);
  
  return 0;
}

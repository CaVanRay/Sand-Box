#include<string>
#include<iostream>

//********************************************************************
class car{
private:

    std::string OwnerName;
    int Mileage;
    int MPG;
    car* NextCar;
    car* PrevCar;

public:

    std::string GetOwner(){
        return OwnerName;
    };
    
    int GetMileage(){
        return Mileage;
    };
    
    int GetMPG(){
        return MPG;
    };
    
    car* GetPrev(){
        return PrevCar;  
    };

    car* GetNext(){
       return NextCar;  
    };
    
    void SetOwner(const std::string newOwner){
        OwnerName = newOwner;
        };
        
    void SetMileage(int newMileage){
        Mileage = newMileage;
        };
        
    void SetMPG(int newMPG){
        MPG = newMPG;
        };

    void SetPrev(car* newPrev){
      PrevCar = newPrev;  
    };

    void SetNext(car* newNext){
      NextCar = newNext;  
    };

// I need to make pointers for "prevCar" & "nextCar" and the ability to create/delete items
// A linked list of "car"s along with a function to run through the list outputting 
// all of the info in each instance

};
//********************************************************************

int main() {

    std::cout << "Let's make some classes!" << std::endl << std::endl ;
    
    car Mustang;
    Mustang.SetOwner("Cavan");
    Mustang.SetMileage(175000);
    Mustang.SetMPG(20);
 
    car Impala;
    Impala.SetOwner("Walker");
    Impala.SetMileage(98000);
    Impala.SetMPG(25);
 
    car Sunfire;
    Sunfire.SetOwner("Rammtein");
    Sunfire.SetMileage(190000);
    Sunfire.SetMPG(28);

    Mustang.SetPrev(nullptr);
    Mustang.SetNext(&Impala);
 
    Impala.SetPrev(&Mustang);
    Impala.SetNext(&Sunfire);
     
    Sunfire.SetPrev(&Impala);
    Sunfire.SetNext(nullptr);
    
    car* A = &Mustang;
    car* B = &Impala;
    car* C = &Sunfire;
    
    std::cout << "Owner: " << A->GetOwner() << std::endl;
    std::cout << A->GetMileage() << " Miles" << std::endl;
    std::cout << A->GetMPG() << " MPG" << std::endl << std::endl;
    
    std::cout << "Owner: " << B->GetOwner() << std::endl;
    std::cout << B->GetMileage() << " Miles" << std::endl;
    std::cout << B->GetMPG() << " MPG" << std::endl << std::endl;
 
    std::cout << "Owner: " << C->GetOwner() << std::endl;
    std::cout << C->GetMileage() << " Miles" << std::endl;
    std::cout << C->GetMPG() << " MPG" << std::endl << std::endl;
    
     car *ListOfCars[3];
        ListOfCars[0] = &Mustang;
        ListOfCars[1] = &Impala;
        ListOfCars[2] = &Sunfire;
    
        for(int i; i < 3; i++){
            A = ListOfCars[i];
            std::cout << "Owner: " << A->GetOwner() << std::endl;
            std::cout << A->GetMileage() << " Miles" << std::endl;
            std::cout << A->GetMPG() << " MPG" << std::endl << std::endl;
        
            }
   
    // I need to create a function that works its way through a linked list of objects, outputting info as it goes
    
 return 0;
}

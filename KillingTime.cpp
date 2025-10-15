#include<string>
#include<iostream>

class car{
private:

    std::string OwnerName;
    int Mileage;
    int MPG;

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
    
    void SetOwner(const std::string newOwner){
        OwnerName = newOwner;
        };
        
    void SetMileage(int newMileage){
        Mileage = newMileage;
        };
        
    void SetMPG(int newMPG){
        MPG = newMPG;
        };

};



int main() {
 
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


    
    car* A = &Mustang;
    car* B = &Impala;
    car* C = &Sunfire;
    
    std::cout << A->GetOwner() << std::endl;
    std::cout << A->GetMileage() << std::endl;
    std::cout << A->GetMPG() << std::endl << std::endl;
    
    std::cout << B->GetOwner() << std::endl;
    std::cout << B->GetMileage() << std::endl;
    std::cout << B->GetMPG() << std::endl << std::endl;
 
    std::cout << C->GetOwner() << std::endl;
    std::cout << C->GetMileage() << std::endl;
    std::cout << C->GetMPG() << std::endl << std::endl;

 return 0;
}

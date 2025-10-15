#include<string>
#include<iostream>

class car{
private:

std::string OwnerName;
int Mileage;
int MPG;

public:

std::string GetOwner();
int GetMileage();
int GetMPG();
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
 

 return 0;
}

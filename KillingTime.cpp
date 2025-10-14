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
 car Impala;
 car Sunfire;
 

 return 0;
}

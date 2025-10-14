#include<string>
#include<iostream>

class car{
private:

std::string ownerName;
int mileage;
int MPG;

public:

std::string GetOwner();
int GetMileage();
int GetMPG();
void SetOwner();
void SetMileage();
void SetMPG();

};

int main() {
 
 car Mustang;
 car Impala;
 car Sunfire;
 

 return 0;
}

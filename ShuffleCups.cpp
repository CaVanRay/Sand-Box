#include<iostream>
#include<cstdlib> 
#include<ctime> 
#include<vector>
#include<array>

using namespace std;

int main(){
    
srand(time(0));
char answer = 'Y';
while(toupper(answer) == 'Y'){

    cout << endl*3;

    int cup[3] = {1, 2, 3};  
    int* ball = &cup[2];
    
  
    
    int randomNumber = (rand() % 3);
    ball = &cup[randomNumber];
    cout << endl << endl << "The Ball is located in cup " << *ball ;
    cout << endl << endl << "Would you like to continue? (Y/N): " ;
    cin >> answer;
}
  
  
  return 0;
}

#include<iostream>
#include<cstdlib> 
#include<ctime> 

using namespace std;

int main(){
    
srand(time(0));
char answer = 'Y';
while(toupper(answer) == 'Y'){

    cout << endl << endl << endl;
    cout << "Watch me put the ball under cup 2";

    int cup[3] = {1, 2, 3};  
    int* ball = &cup[2];
    
    cout << endl << endl << endl;
    cout << "And now I shuffle the cups";
    
    int randomNumber = (rand() % 3);
    ball = &cup[randomNumber];
    
    
    cout << endl << endl << "The Ball is located in cup " << *ball ;
    cout << endl << endl << "Would you like to continue? (Y/N): " ;
    cin >> answer;
}
  
  
  return 0;
}

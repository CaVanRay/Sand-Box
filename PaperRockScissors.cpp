#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

  srand(time(NULL));
  cout << "Want to play a game of paper, rock, scissors? " << "\n";
  char answ;
  cin >> answ;
  cout << "Pick a weapon and then click enter" << "\n";
  cin.get();
  int weapon = ((rand() % 3) + 1)

  switch(weapon){
   case 1:
        cout << "Paper" << endl;
        break;
            
    case 2:
        cout << "Rock" << endl;
        break;
        
    case 3:
        cout << "Scissors" << endl;
        break;
  }

  return 0;
}

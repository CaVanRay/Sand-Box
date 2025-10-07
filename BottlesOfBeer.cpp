#include <iostream>

using namespace std;

int main(){

    char cont = 'Y';
  
    while(toupper(cont) == 'Y'){

        int numOfBottles;
        cout << "How many bottles are on the wall? :";
        cin >> numOfBottles;

        for(int i = numOfBottles; i > 0; i--){
            cout << numOfBottles << " bottles of beer on the wall!" << endl;
            cout << numOfBottles << " bottles of beer!" << endl;
            cout << "We take one down, pass it around!" << endl;
            if(i == 1){
                cout << "There are no more bottles of beer on the wall!" << endl;
            }else{
                cout << numOfBottles-1 << " of beer on the wall!" << endl; 
            }
        }
        
          
        cout << "Do you want to continue? Y/N :";
        cin >> cont;
    }
    
  return 0;
}

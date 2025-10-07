#include <iostream>

using namespace std;

int main(){

    char cont = 'Y';
  
    while(toupper(cont) == 'Y'){

        int numOfBottles;
        cout << "How many bottles are on the wall? :";
        cin >> numOfBottles;

        for(int i = numOfBottles; i > 0; i--){
            cout << i << " bottles of beer on the wall!" << endl << endl;
            cout << i << " bottles of beer!" << endl << endl;
            cout << "We take one down, pass it around!" << endl << endl;
            if(i == 1){
                cout << "There are no more bottles of beer on the wall!" << endl << endl;
            }else{
                cout << i-1 << " of beer on the wall!" << endl << endl << endl << endl; 
            }
        }
        
          
        cout << "Do you want to continue? Y/N :";
        cin >> cont;
    }
    
  return 0;
}

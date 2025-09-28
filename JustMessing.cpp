#include <vector>
#include <iostream>
using namespace std;


int main() {
    
    int number1;

    cout << "Please pick a number" << endl << "    :";
    cin >> number1;

    cout << endl << "ok, lets have some fun" << endl;
    for(int i = 1; i <= number1; i++){
        for(int j = 1; j <= number1; j++){
            cout << " " << i*j << " ";
        }
        cout << endl;
    }
    
    return 0;
}

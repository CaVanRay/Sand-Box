#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;


// this is just a dumb program that breaks when you pick a number larger than 4 or 5
// and technically it doesnt break, it just overwelms the screen


int main() {
    
    int number1;

    cout << "Please pick a number" << endl << "    :";
    cin >> number1;

    cout << endl << "ok, lets have some fun" << endl << endl;
    for(double i = 1; i <= number1; i = i + .25){
        for(double j = 1; j <= number1; j = j + .25){
            cout << left << setw(10) << i*j << setw(10);
        }
        cout << endl << endl;
    }
    
    return 0;
}

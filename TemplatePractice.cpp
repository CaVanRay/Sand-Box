#include <iostream>


template <typename T>
class Calculator {
 
 public:
 
 T add(T a, T b) {
    return a + b;
} 
 T subtract(T a, T b) {
    return a - b;
} 
    
};

using namespace std;

int main() {
    
    Calculator<int> intCalculator;
    
    cout << intCalculator.add(5, 8) << endl;
    cout << intCalculator.subtract(5, 8) << endl;
    
    Calculator<float> floatCalculator;
    
    cout << floatCalculator.add(5.2, 7.84) << endl;
    cout << floatCalculator.subtract(5.2, 7.84) << endl;
    
}


 

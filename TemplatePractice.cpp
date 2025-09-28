#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

using namespace std;

int main() {
    
    cout << add(5, 7) << endl;
    
    cout << add(5.3, 7.7) << endl;
    
}


 

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int temp;

    // Output original values
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap values
    temp = a;
    a = b;
    b = temp;

    // Output swapped values
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    float c, f;
    cout << "Enter Celsius: ";
    cin >> c;

    f = (c * 9/5) + 32;

    cout << "Fahrenheit = " << f;
    return 0;
}

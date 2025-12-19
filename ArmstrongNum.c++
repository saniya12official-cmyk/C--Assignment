#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, sum = 0;
    cout << "Enter a 3-digit number: ";
    cin >> n;

    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        sum += pow(d, 3);
        temp /= 10;
    }

    if (sum == n) cout << "Armstrong Number";
    else cout << "Not Armstrong";

    return 0;
}

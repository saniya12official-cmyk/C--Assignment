#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, next;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << t1 << " " << t2 << " ";
    for (int i = 3; i <= n; i++) {
        next = t1 + t2;
        cout << next << " ";
        t1 = t2;
        t2 = next;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of sorted array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Found at index " << mid;
            return 0;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Not Found";
    return 0;
}

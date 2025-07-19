#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Size of arr1 (in bytes): " << sizeof(arr1) << endl;
    cout << "Number of elements in arr1: " << size1 << endl;
    cout << "Number of elements in arr2: " << size2 << endl;

    int merged[size1 + size2];

    // Copy elements from arr1
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from arr2
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    // Print merged array
    cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter initial size of the array: ";
    cin >> size;

    // Allocate memory dynamically
    int* arr = new int[size];

    // Input elements
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cout<<"enter the value at arr["<<i<<"] index :";
        cin >> arr[i];
    }

    // Traverse and print array
    cout << "Initial Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insertion at the end
    int newSize;
    cout << "Enter new Size of Array :  ";
    cin >> newSize;

    // Create new array of size+1
    int* newArr = new int[newSize];

    // Copy old elements
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    if(newSize>size){
    // Insert new element at end
        for(int i=size; i<newSize;i++){
           cout<<"enter the value at arr["<<i<<"] index :";
                cin >> newArr[i];
        }
    }

    

    // Free old array memory
    delete[] arr;

    // Reassign newArr to arr
   

    // Print final array
    cout << "Updated Array: ";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    // Free final array memory
    delete[] newArr;
    delete[] arr;

    return 0;
}

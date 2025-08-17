// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}
int main() {
    int arr[] = {10,3,7,11,45,70,5 };
    int size = sizeof(arr)/sizeof(arr[0]);
    
    insertionSort(arr, size);
    cout<<"array after insertion Sort : ";
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
}
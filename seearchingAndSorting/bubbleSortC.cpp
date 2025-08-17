#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {10,3,7,11,45,70,5 };
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size);
    cout<<"array after bubble sort : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
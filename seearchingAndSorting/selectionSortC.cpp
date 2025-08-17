// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
        for(int i=0; i<n; i++){
            int minIndex = i;
            for(int j=i+1; j<n;j++){
                if(arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }
            if(minIndex !=i){
                int temp = arr[i];
                arr[i]= arr[minIndex];
                arr[minIndex] = temp;
            }
        }
}

int main() {
   int arr[] = {64,25,12,22,11};
   int size = sizeof(arr)/sizeof(arr[0]);
   
   selectionSort(arr,size);
   cout<<"array after selection sort : " ;
   for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
   }
}
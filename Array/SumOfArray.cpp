#include<iostream>
using namespace std;


int main(){
    int arr[] = {10, 20 ,30 ,40 ,50};
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        sum = sum + arr[i]; 
    }

    cout<<"sum of array = "<<sum;
}
#include<iostream>
using namespace std;

int linearSearch(int arr[], int key, int n){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,7,2,10,8,5};
    int key = 8;
    int n = sizeof(arr)/ sizeof(arr[0]);
    int index = linearSearch(arr,key,n);
    if(index==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at index : "<<index;
    }
}

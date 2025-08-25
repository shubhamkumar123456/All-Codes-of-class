#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int start, int end){
    while(start <= end ){
        int mid = (start + end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {20, 40, 50,60, 80};
    int key = 55;
    int n = sizeof(arr)/ sizeof(arr[0]);
    int index = binarySearch(arr,key,0,n-1);
    if(index==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at index : "<<index;
    }
}

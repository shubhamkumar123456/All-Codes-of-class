#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int partition(vector<int>&arr , int  start, int end){
    int pivot = arr[end];
    int i = start-1;
    for(int j=start; j<end;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    cout<<i+1<<endl;
    return i+1;
}

void quickSort(vector<int>&arr , int  start, int end){
    if(start<end){
        int pivotIndex = partition(arr, start, end);
    quickSort(arr,start,pivotIndex-1);
    quickSort(arr,pivotIndex+1, end);
    }
   return;
}

int main(){
    vector<int>arr = {10,3,7,11,45,70,5 };
    quickSort(arr, 0, arr.size()-1);

    for(int val:arr){
        cout<<val <<" ";
    }
}
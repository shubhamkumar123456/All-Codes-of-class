
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>&arr, int start, int mid, int end){
    int i=start;
    int j=mid+1;
    vector<int>temp;
    while(i<=mid && j <=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    
    for(int i=0; i<temp.size(); i++){
        arr[i+start] = temp[i];
    }
}

void mergeSort(vector<int>&arr,int start ,int end){
    if(start<end){
    int mid = (start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr, start,mid,end);
    }
    
}

int main() {
   vector<int>arr = {10,4,2,8,15,9};
   mergeSort(arr,0,arr.size()-1);
   for(int val:arr){
       cout<<val<<" ";
   }

    return 0;
}
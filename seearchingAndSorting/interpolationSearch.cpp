#include<iostream>
using namespace std;

int interpolationSearch(int arr[], int key, int start, int end){
    while(start <= end ){
        int position = start + ((key - arr[start]) * (end - start)) / (arr[end] - arr[start]);
        if(arr[position]==key){
            return position;
        }
        else if(arr[position]<key){
            start = position+1;
        }
        else{
            end = position-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {20, 40,60, 80, 100};
    int key = 80;
    int n = sizeof(arr)/ sizeof(arr[0]);
    int index = interpolationSearch(arr,key,0,n-1);
    if(index==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at index : "<<index;
    }
}

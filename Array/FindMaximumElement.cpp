#include<iostream>
using namespace std;


int main(){
    int arr[] = {10,20,30,100,0,40,70};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];

    for(int i = 0; i<size; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    cout<<"maximum element in array = "<<max<<endl;

}
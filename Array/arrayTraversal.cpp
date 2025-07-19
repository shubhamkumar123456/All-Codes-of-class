#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,5,1,10,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    // print each value manually using index
    cout<<"print each value manually using index"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl<<endl;

    cout<<"print each value using loop"<<endl;
    for(int i = 0 ; i <size; i++){
        cout<<arr[i]<<endl;
    }
}
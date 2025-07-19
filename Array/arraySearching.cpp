#include<iostream>
#include<stdbool.h>
using namespace std;
 // Include this for bool, true, false
int main()
{
    int arr[5] = {5, 3, 2, 1, 9};
    int n = 5, val=2;
    bool find =false;
    int findIndex=-1;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]==val){
        find = true;
        findIndex = i;
       }
    }
    if(find){
        cout<<"element find at "<<findIndex <<" index successfully"<<endl;
    }
    else{
        cout<<"element not exists"<<endl;
    }
}
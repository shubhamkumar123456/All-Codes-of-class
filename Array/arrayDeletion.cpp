#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 3, 2, 1, 9};
    int n = 5;

    int pos = 2;
    
    // 1) delete part -->for delete we need to shift each element left
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<' ';
    }
}
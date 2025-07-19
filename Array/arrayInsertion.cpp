#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 3, 2, 1};
    int n = 5;
    
    int pos = 2, val = 8;
    
    // 1) insert part -->for insert we need to shift each element right
    for (int i = n-1; i >pos; i--)
    {
            arr[i] = arr[i - 1];
        }
        
        arr[pos] = val;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
}
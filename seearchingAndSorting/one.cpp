#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[]= new int[n];
  a[0]={1};
  for(int i=1; i<=n; i++){
    cout<<i<<' ';
  }
  cout<<a[0];
  return 0;
} 

#include<iostream>
using namespace std;

int GCD(int n1, int n2){
    if(n2==0){
        return n1;
    }
    else{
        return GCD(n2, n1%n2);
    }
}
int main(){
    int num1;
    int num2;

    cout<<"enter number 1 : ";
    cin>>num1;
    cout<<endl<<"enter number 2 : ";
    cin>>num2;

    cout<<GCD(num1,num2);
}
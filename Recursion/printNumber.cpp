#include<iostream>
using namespace std;

void printValues(int s, int e){
    if(s==e){
        cout<<s<<" ";
        return;
    }
    else{
        cout<<s<<" ";
        return printValues(s+1,e);
    }
}
int main(){
    int start;
    int end;
    cout<<"enter a number to start print : ";
    cin>>start;
    cout<<endl<<"enter a number to end print: ";
    cin>>end;

    printValues(start , end);
}
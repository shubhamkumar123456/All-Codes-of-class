#include<iostream>
using namespace std;


void TOH(int n, char src, char aux, char dest){
    if(n==1){
        cout<<"move disk from "<<src<<" to "<<dest<<endl;
    }
    else{
        TOH(n-1, src, dest,aux);
        TOH(1,src,aux,dest);
        TOH(n-1,aux ,src ,dest );
    }
}

int main(){
    int disk;
    cout<<"enter the number of disk : ";
    cin>>disk;

    TOH(disk,'A','B','C');
}
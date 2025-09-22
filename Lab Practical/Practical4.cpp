// Tower of hanoi code
#include<iostream>
using namespace std;

void TOH(int n,char src, char dest, char aux){
  if(n==1){
    cout<<"Move disk 1 from rod "<<src<<" to rod "<<dest<<endl;
    return;
  }
  else{
    TOH(n-1,src,aux,dest);
    cout<<"Move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
    TOH(n-1,aux,dest,src);
  }
}
int main(){
  int n;
  cin>>n;
  
  TOH(n,'A','C','B');
}
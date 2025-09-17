#include<iostream>
#include<string>
using namespace std;
int top=-1;


void push(int st[], int n, int val){
  if(top<n-1){
    top++;
    st[top] = val;
  }
  else{
    cout<<"Stack Overflow"<<endl;
  }
}


void pop(int st[]){
  if(top==-1){
    cout<<"Stack Underflow"<<endl;
  }
  else{
    cout<<st[top]<<endl;
    top--;
  }
}

void traverse(int st[]){
  if(top==-1){
    cout<<"Stack Underflow"<<endl;
  }
  else{
    for(int i=top; i>=0; i--){
      cout<<st[i]<<" ";
    }
    cout<<endl;
  }
}

void peek(int st[]){
  if(top==-1){
    cout<<"Stack Underflow"<<endl;
  }
  else{
    cout<<st[top]<<endl;
}
}


int search(int st[], int val){
  if(top ==-1){
    cout<<"Stack Underflow";
  }
  else{
    for(int i=top; i>=0; i--){
      if(st[i]== val){
        return 1;
      }
    }
    return -1;
}
}





int main(){
  int N;
  int Q;
  int *stack;
  cin>>Q;
  
  while(Q){
    string choice;
    cin>>choice;
    if(choice=="create"){
      cin>>N;
      stack = new int[N];
    }
    
    else if(choice =="push"){
        int val;
        cin>>val;
        push(stack, N, val);
    }
    else if(choice=="pop"){
      pop(stack);
    }
    else if(choice=="peek"){
      peek(stack);
    }
    
    else if(choice=="traverse"){
      traverse(stack);
    }
    
    else if(choice=="search"){
        int key;
        cin>>key;
      cout<<search(stack, key)<<endl;
    }
    
    
    Q--;
  }
}
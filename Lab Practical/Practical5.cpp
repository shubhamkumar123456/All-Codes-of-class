// implement Queue and its operations 
#include<iostream>
using namespace std;
#define SIZE 100
int arr[SIZE];
int front = -1, rear = -1;

bool isEmpty(){
  return (front==-1 &&rear ==-1);
}

bool isFull(){
  return (rear == SIZE-1);
}
void enqueue(int x){
  if(isFull()){
    cout<<"FULL\n";
    return;
  }
  if(isEmpty()){
    front = rear = 0;
  }
  else{
    rear++;
  }
  arr[rear] = x;
}

void dequeue(){
  if(isEmpty()){
    cout<<"EMPTY\n";
  }
  else if(front==rear){
    cout<<arr[front];
    front=rear=-1;
  }
  else{
    cout<<arr[front]<<endl;
    front++;
  }
}
void traverse(){
  if(isEmpty()){
    cout<<"EMPTY"<<endl;
    return;
  }
  for(int i= front; i<=rear; i++){
    cout<<arr[i];
    if(i<rear){
      cout<<" ";
    }
  }
  cout<<endl;
}
void search(int x){
  if(isEmpty()){
    cout<<"NOT FOUND"<<endl;
    return;
  }
  for(int i=front; i<=rear; i++){
    if(arr[i]==x){
      cout<<"FOUND"<<endl;
      return;
    }
  }
  cout<<"NOT FOUND"<<endl;
}

int main(){
  int Q;
  cin>>Q;
  while(Q--){
    string op;
    cin>>op;
    if(op=="enqueue"){
      int x;
      cin>>x;
      enqueue(x);
    }
    else if(op=="dequeue"){
      dequeue();
    }
    else if(op=="traverse"){
      traverse();
    }
    else if(op=="search"){
      int x;
      cin>>x;
      search(x);
    }
  }
  return 0;
}
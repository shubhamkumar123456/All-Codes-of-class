// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define size 4
int dequeue[size];
int front =-1, rear =-1;

bool isFull(){
    return  ((rear+1)%size==front);
}

bool isEmpty(){
    return front==-1;
}

void pushBack(int num){
    if(isFull()){
        cout<<"queue is full can not insert"<<endl;
    }    
    else if (isEmpty()){
        rear= front = 0;
        dequeue[rear]= num;
        cout<<num<<" inserted"<<endl;
    }
    else{
        rear = (rear+1)%size;
        dequeue[rear] = num;
         cout<<num<<" inserted"<<endl;
    }
}

void pushFront(int num){
  if(isFull()){
      cout<<"queue is full can not insert"<<endl;
  }
  else if (isEmpty()){
        rear= front = 0;
        dequeue[rear]= num;
        cout<<num<<" inserted"<<endl;
    }
    else{
        front = (front-1+size)%size;
        dequeue[front]= num;
        cout<<num<<" inserted"<<endl;
    }
}

void popFront(){
      if(isEmpty()){
        cout<<"queue is empty can not remove "<<endl;
    } 
    else if(front == rear){
        cout<<dequeue[front]<<"removed from front\n";
        front = rear = -1;
    }
    else{
        cout<<dequeue[front]<<"removed from front\n";
        front = (front+1)%size;
    }
}

void popBack(){
    if(isEmpty()){
        cout<<"queue is empty can not remove "<<endl;
    }
    else if(front == rear){
        cout<<dequeue[rear]<<" removed"<<endl;
        front =rear =-1;
    }
    else{
        cout<<dequeue[rear]<<" removed"<<endl;
        rear = (rear-1+size)%size;
    }
}

void display(){
    if(isEmpty()){
        cout<<"queue is empty can not print element"<<endl;
    }
    else{
        for(int i=front; i!=rear; i= (i+1)%size){
            cout<<dequeue[i]<<" ";
        }
        cout<<dequeue[rear]<<endl;
    }
}

int main() {
  pushFront(10);
  pushFront(20);
  pushBack(30);
  pushBack(40);
  display();
  popFront();
  popBack();
  display();
  pushFront(2);
  pushBack(22);
  pushBack(222);
  display();
}
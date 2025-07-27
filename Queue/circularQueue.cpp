#include<iostream>
using namespace std;
#define size 4
int front=-1;
int rear = -1;
int queue[size];

void enqueue(int num){
    if(front==0 && rear == size-1  || (rear+1)%size==front ){
        cout<<"queue is full can not insert"<<endl;
    }
    else if(front==-1 && rear ==-1){
        front = rear = 0;
        queue[rear]= num;
        cout<<num <<" inserted"<<endl;
    }
    else{
        rear = (rear +1 )%size;
        queue[rear]= num;
        cout<<num <<" inserted"<<endl;
    }
}

void dequeue(){
    if(front==-1){
        cout<<" queue is empty can not remove"<<endl;
    }
    else if(front==rear){
        cout<<queue[front]<<" removed\n";
        front = rear = -1;
    }
    else{
        cout<<queue[front]<<" removed\n";
        front = (front +1)%size;
    }
}

void display(){
     if(front==-1){
        cout<<" queue is empty can not remove"<<endl;
    }
    else{
        for(int i= front; i!=rear; i= (i+1)%size){
            cout<<queue[i]<<" ";
        }
        cout<<queue[rear];
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    enqueue(60);
    display();
}
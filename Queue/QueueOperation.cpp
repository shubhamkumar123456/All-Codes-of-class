#include<iostream>
using namespace std;
#define SIZE 5

int Queue[SIZE];
int front =-1, rear = -1;

void enqueue(int num){
    if(front==-1 && rear ==-1){
        front = rear = 0;
        Queue[rear] = num;
        cout<<num<<" inserted"<<endl;
    }
    else if(rear<SIZE-1){
        rear++;
        Queue[rear] = num;
        cout<<num<<" inserted\n";
    }
    else{
        cout<<"overflow\n";
    }
}


void dequeue(){
    if(front==-1){
        cout<<"queue is underflow can not remove"<<endl;
    }
    else if(front==rear){
        cout<<Queue[front]<<" removed"<<endl;
        front= rear = -1;
    }
    else{
        cout<<Queue[front]<<" removed"<<endl;
        front++;
    }
    

}

void traverse(){
    if(front==-1 && rear==-1){
        cout<<"queue is empty(underflow) can not print elements"<<endl;
    }
    else{
        cout<<"all elements in queue : "<<endl;
        for(int i=front; i<=rear; i++){
            cout<<Queue[i]<<endl;
        }
    }
}

int main(){
    enqueue(10);
    enqueue(4);
    enqueue(8);
    enqueue(18);
    enqueue(70);
    dequeue();
    dequeue();
    dequeue();
    traverse();
}
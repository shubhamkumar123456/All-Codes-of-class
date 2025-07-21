#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int num){
    Node* newNode = new Node();
    newNode->data = num;
    newNode->next = NULL;

    if(head==NULL){
        head = newNode;
        cout<<num<<" is inserted"<<endl;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp= temp -> next;
        }
        temp->next = newNode;
        cout<<num<<" is inserted"<<endl;
    }
}

void traverse(){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL";

}

int main(){
    insertEnd(5);
    insertEnd(10);
    insertEnd(15);
    traverse();
}
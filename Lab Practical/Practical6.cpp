// implementation of singly link list
#include<iostream>
using namespace std;

struct Node{
  int data;
  Node*next;
  Node(int val){
    data = val;
    next = NULL;
  }
};
Node*head = NULL;

void insertBeg(int x){
  Node* newNode = new Node(x);
  newNode->next = head;
  head = newNode;
}

void insertEnd(int x){
  Node* newNode = new Node(x);
  if(!head){
    head = newNode;
    return;
  }
  Node*temp = head;
  while(temp->next){
    temp = temp->next;
  }
  temp->next = newNode;
}

void insertPos(int pos , int x){
  if(pos<=1 || !head){
    insertBeg(x);
    return;
  }
  Node*newNode = new Node(x);
  Node*temp = head;
  for(int i=1; i<pos-1 && temp->next; i++){
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void deleteVal(int x){
  if(!head){
    cout<<"NOT FOUND"<<endl;
    return;
  }
  if(head->data==x){
    Node*temp = head;
    head = head->next;
    delete temp;
    return ;
  }
  Node*temp = head;
  while(temp->next && temp->next->data !=x){
    temp = temp->next;
  }
  if(!temp->next){
    cout<<"NOT FOUND"<<endl;
    return;
  }
  Node*delNode = temp->next;
  temp->next = temp->next->next;
  delete delNode;
}

void search(int x){
  Node* temp = head;
  while(temp){
    if(temp->data ==x){
      cout<<"FOUND"<<endl;
      return;
    }
    temp = temp->next;
  }
  cout<<"NOT FOUND"<<endl;
}

void traverse(){
  if(!head){
    cout<<"EMPTY"<<endl;
    return;
  }
  Node*temp = head;
  while(temp){
    cout<<temp->data;
    temp = temp->next;
    if(temp){
      cout<<" ";
    }
  }
  cout<<endl;
}

void reverseList(){
  Node*prev = NULL;
  Node*curr = head;
  Node*next = NULL;
  while(curr){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
}

int main(){
  int Q;
  cin>>Q;
  while(Q--){
    string op;
    cin>>op;
    if(op=="insertBeg"){
      int x;
      cin>>x;
      insertBeg(x);
    }
    else if(op=="insertEnd"){
      int x;
      cin>>x;
      insertEnd(x);
    }
    else if(op=="insertPos"){
      int p, x;
      cin>>p;
      cin>>x;
      insertPos(p,x);
    }
    else if(op=="delete"){
      int x;
      cin>>x;
      deleteVal(x);
    }
    else if(op=="traverse"){
      traverse();
    }
    else if(op=="reverse"){
      reverseList();
    }
  }
  return 0;
}
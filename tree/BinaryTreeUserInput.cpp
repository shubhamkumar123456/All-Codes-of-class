#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(Node* root){
    if(root){
        cout<<root->data<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}
void preorder(Node* root){
    if(root){
        preorder(root->left);
        cout<<root->data<<" ";
        preorder(root->right);
    }
}
void postorder(Node* root){
    if(root){
     postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    }
   
}

Node *insert(Node*root, int val){
    if(root==nullptr){
        return new Node(val);
    }
    else if(val < root->data){
        root->left = insert(root->left, val);
    }
    else if(val > root->data){

        root->right = insert(root->right, val);
    }
    return root;
}
int main(){
    int n; 
    cout<<"enter the no of node : ";
    cin>>n;

    int*arr = new int[n];
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }

    Node*root = nullptr;
    for(int i=0;i<n;i++){
        root = insert(root,arr[i]);
    }
    
    cout<<endl;

    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder : ";
    postorder(root);
    cout<<endl;
}
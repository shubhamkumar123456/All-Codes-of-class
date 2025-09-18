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

Node*findMin(Node*root){
    while(root && root->data ){
        root= root->left;
    }
    return root;
}

Node* deleteNode(Node*root , int key){
    if(root==nullptr){
        return root;
    }
    else if(key < root->data){
        root ->left = deleteNode(root->left, key);
    }
    else if(key > root -> data){
        root->right = deleteNode(root->right, key);
    }
    else{
        // case 1 --> delete last child
        if(root->left ==nullptr && root->right ==nullptr ){
            delete root;
            return nullptr;
        }
        // case 2 -->delete node which have one child
        else if(root->left==nullptr){
            Node*temp  = root->right;
            delete root;
             return temp;
        }
        else if(root->right ==nullptr){
            Node*temp = root->left;
            delete root;
            return temp;
        }
        // case 3 two children
        else{
            Node*temp  = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
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


    deleteNode(root, 60);
}
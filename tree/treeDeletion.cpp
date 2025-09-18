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

void preorder(Node* root){
    if(root){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
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


Node *rightMin(Node*root){
    while(root && root->left){
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int val){
    if(root == nullptr){
        return root;
    }
    else if(val < root->data){
        root->left = deleteNode(root->left, val);
    }
    else if(val > root->data){
        root-> right = deleteNode(root->right, val);
    }
    else {
        // case 1--> delete leaf node
        if(root->left==nullptr && root->right== nullptr){
            delete root;
            return nullptr;
        }
        // case 2 --> delete node that have one child
        else if(root->right == nullptr){
            Node*temp = root->left;
            delete root;
             return temp;
        }
        else if(root->left == nullptr){
            Node*temp = root->right;
            delete root;
            return temp;
        }
        // case 3 --> delete node with both child
        else{
            Node*temp = rightMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
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

    root = deleteNode(root, 20);

    cout<<endl;
    cout<<"Inorder after deleteion : ";
    inorder(root);
    cout<<endl;

}

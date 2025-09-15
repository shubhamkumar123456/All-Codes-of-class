#include<iostream>
using namespace std;

struct Node{
    int data, height;
    Node*left;
    Node*right;

    Node(int val){
        data = val;
        height = 1;
        left = nullptr;
        right = nullptr;
    }
};

int getHeight(Node*root){
    if(!root){
        return 0 ;
    }
    else{
        return root->height;
    }
}

int getFactor(Node*root){
    if(!root){
        return 0;
    }
    else{
        return getHeight(root->left) - getHeight(root->right);
    }
}

Node*leftRotation(Node*root){
   
    Node* child = root->right;
    Node* chilLeft = child->left;
    child->left = root;
    root->right = chilLeft;

    root->height = 1+ max(getHeight(root->left), getHeight(root->right));
    child->height = 1+ max(getHeight(child->left), getHeight(child->right));
 return child;


}
Node*rightRotation(Node*root){
     Node*Child = root->left;
    Node*childRight = Child->right;
    Child->right = root;
    root->left = childRight;
    root->height = 1+ max(getHeight(root->left), getHeight(root->right));
    Child->height = 1+ max(getHeight(Child->left), getHeight(Child->right));
    return Child;
}

Node* insert(Node*root, int key){
    if(root == nullptr){
        return new Node(key);
    }
     else if(key < root->data){
        root->left = insert(root->left, key);
    }
    else if(key > root->data){
        root->right = insert(root->right, key);
    }
    else{
        return root;
    }

    // 2 is update height;
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // 3 get balance factor (0, 1, -1) or other
    int balance = getFactor(root); 

     // Balance the tree if needed

     if(balance > 1 && key <root->left->data){
       return rightRotation(root);
     }
     else if(balance <-1 && key >root->right->data){
       return leftRotation(root);
     }
     else if(balance > 1 && key > root->left->data){
        root->left = leftRotation(root->left);
        return rightRotation(root);
     }
     else if(balance <-1 && key <root->right->data){
        root->right = rightRotation(root->right);
        return leftRotation(root);
     }
   
     return root;

}



void inorder(Node*root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}


int main(){
    Node*root= nullptr;
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,30);
    root = insert(root,40);
    root = insert(root,50);

     cout << "Inorder traversal of AVL Tree: ";
    inorder(root);
    cout << endl;
}
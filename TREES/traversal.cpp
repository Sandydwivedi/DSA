
#include <iostream>
#include<math.h>
using namespace std;

class node{
 public:   
    int data;
    node* left;
    node* right;

    // constructor
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node* buildtree(){
    cout<<"enter the data";
    int data;
    cin>>data;

    if(data==-1) return NULL;

    node* newnode = new node(data);

   cout << "Enter the data for left child of " << data << endl;
    newnode->left = buildtree();

    cout << "Enter the data for right child of " << data << endl;
    newnode->right = buildtree();

    return newnode;
}

// preorder traversal to check tree
void preorder(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
    
}

void inorder(node* root){
     if (root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder(node* root){
     if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

int main() {
node* root = buildtree();

    cout << "\nPreorder Traversal: ";
    preorder(root);

     cout << "\ninorder Traversal: ";
    inorder(root);

    cout << "\npostorder Traversal: ";
    postorder(root);

    return 0;
}
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree (node* root){
    int data;
    cout<<"Enter a value : ";
    cin>>data;

    root = new node(data);

    if (root->data==-1)
    {
        return NULL;
    }
    
    cout<<"Enter a value to left of "<<data;
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
}

void preOrderTriversal(node* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrderTriversal(root->left);
    preOrderTriversal(root->right);
}

int main(){
    node* root = NULL;
    root = buildTree(root);

    preOrderTriversal(root);

    return 0; 
}
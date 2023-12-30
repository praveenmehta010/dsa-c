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

node* buildTree(node* root){
    int data;
    cout<<"Enter a valuel : ";
    cin>>data;

    root = new node(data);

    if (data==-1)
    {
        return NULL;
    }
    
    cout<<"Enter the value left to "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the value right to "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void postOrderTriversal(node* root){
    if (root==NULL)  
    {
        return;
    }
    postOrderTriversal(root->left);
    postOrderTriversal(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root = NULL;
    root = buildTree(root);
    cout<<"PostOrderTriversal";
    postOrderTriversal(root);
    return 0;
}
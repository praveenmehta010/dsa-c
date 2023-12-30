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
    cout<<"Enter a number : ";
    cin>>data;
    root = new node(data);

    if (root->data==-1)
    {
        return NULL;
    }
    

    cout<<"Enter value left to "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter value right to "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrderTriversal(node* root){
    if (root==NULL)
    {
        return;
    }
    inOrderTriversal(root->left);
    cout<< root->data<< " ";
    inOrderTriversal(root->right);
}

int main(){
    node* root = NULL;
    root = buildTree(root);
    cout<<"InOrderTriversal";
    inOrderTriversal(root);
}
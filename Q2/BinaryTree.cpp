#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void displayBtree(node *root)
{
    if (root == NULL)
    {
        // cout<<"Pls create a Tree";
        return;
    }

    cout << root->data << "->";
    displayBtree(root->left);
    displayBtree(root->right);
}

node *buildTree(node *root)
{
    int data;
    cout << "Enter a value : ";
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the value in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the value in right node : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

int coutNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (1 + coutNodes(root->left) + coutNodes(root->right));
}

int coutLeafNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    else
    {
        return (coutLeafNodes(root->left) + coutLeafNodes(root->right));
    }
}

void displayTree(node *root)
{
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    int count = 0;
    count = coutNodes(root);
    cout << "number of node : " << count<<endl;
    count = coutLeafNodes(root);
    cout<<"Number of Leaf Nodes : "<<count<<endl;
    // displayBtree(root);
    return 0;
}
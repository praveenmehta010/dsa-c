#include <iostream>
using namespace std;

class TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int countNodes(TreeNode* root)
{
    if (root == NULL)
    {
        return 0;
    }
    
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);
    
    return 1 + leftCount + rightCount;
}
int main()
{
    // Example binary tree
    // 1
    // / \
// 2 3
    // / \
// 4 5
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    int nodeCount = countNodes(root);
    cout << "Number of nodes in the binary tree: " << nodeCount << endl;
    // Clean up memory (optional, depending on the context)
    // Assuming there's a function `deleteTree` that deletes the entire tree
    // deleteTree(root);
    return 0;
}

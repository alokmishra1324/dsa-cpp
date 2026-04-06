// Count complete tree nodes

#include <bits/stdc++.h>
using namespace std;

private:
int LeftNodes(TreeNode* root)
{
    int dep = 0;
    while(root != NULL)
    {
        root = root->left;
        dep++;
    }
    return dep;
}
int RightNodes(TreeNode* root)
{
    int dep = 0;
    while(root != NULL)
    {
        root = root->right;
        dep++;
    }
    return dep;
}
public:
    int countNodes(TreeNode* root) {
        int leftNodes = LeftNodes(root);
        int rightNodes = RightNodes(root);
        if(leftNodes == rightNodes)
        {
            return pow(2, leftNodes) - 1;
        }
        else
        {
            return 1 + countNodes(root->left) + countNodes(root->right);
        }

    }
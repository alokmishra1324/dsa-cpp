#include <bits/stdc++.h>
using namespace std;

int sum = 0;
void getPathSum(TreeNode* root , int currSum)
{
    if(root == NULL)
    {
        return;
    }
    currSum = currSum*10 + root->val;
    if(root->left == NULL && root->right ==NULL)
    {
        sum += currSum;
        return;
    }
    getPathSum(root->left , currSum);
    getPathSum(root->right, currSum);
    
}
    int sumNumbers(TreeNode* root) {
        getPathSum(root , 0);
        return sum;
    }
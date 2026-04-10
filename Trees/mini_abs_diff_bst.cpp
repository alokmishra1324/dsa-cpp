#include <bits/stdc++.h>
using namespace std;

    int minDiff = INT_MAX;
    int prev = -1;
    int getMinimumDifference(TreeNode* root) {

        if (root == NULL) {
            return minDiff;
        }
        getMinimumDifference(root->left);

        if (prev != -1) {
            minDiff = min(minDiff, root->val - prev);
        }
        if (root != NULL) {
            prev = root->val;
        }
        getMinimumDifference(root->right);

        return minDiff;
    }
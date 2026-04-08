// Average of Levels in Binary Tree
#include <bits/stdc++.h>
using namespace std;

vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        if(root == NULL) return ans;
         queue<TreeNode*>q;
         q.push(root);

         while(!q.empty())
         {
            vector<int> level;
            int size =  q.size();
            long long levelSum = 0;
            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                levelSum += node->val;
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
       
            ans.push_back((double)levelSum /size);
         }
         return ans;
    }
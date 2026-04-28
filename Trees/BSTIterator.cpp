#include <bits/stdc++.h>
using namespace std;

class BSTIterator {
private: stack<TreeNode*>st;
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* tmpnode = st.top();
        st.pop();
        pushAll(tmpnode->right);
        return tmpnode->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
private:
    void pushAll(TreeNode * node)
    {
        for(; node != NULL ; st.push(node) , node=node->left);
    }
};
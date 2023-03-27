#include<iostream>
#include<climits>
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    double prev_diff = INT_MAX;;
    double curr_diff;
    double min_val = INT_MAX;
    int helper(TreeNode* root, double target)
    {
        if (root == nullptr)
        {
            return 0;
        }
        curr_diff = abs(target - root->val);
        
        if (curr_diff < prev_diff)
        {
            prev_diff = curr_diff;
            min_val = root->val;
        }
        if ((double)root->val > target)
        {
            closestValue(root->left, target);
        }
        else if ((double)root->val < target)
        {
            closestValue(root->right, target);
        }
        return 0;
    }
    int closestValue(TreeNode* root, double target) {
        
        helper(root, target);
        
                
    return min_val;      
    }
};
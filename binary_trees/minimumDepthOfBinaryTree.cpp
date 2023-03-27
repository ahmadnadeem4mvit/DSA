// Definition for a binary tree node.
#include<iostream>
#include<climits>
using namespace std;
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
    int callme(TreeNode* root)
    {
        if (root == nullptr)
            return 0;

        int min_val = INT_MAX;        
        int left ;

        if(root->left == nullptr && root->right == nullptr)
            return 1;

        if (root->left != nullptr)
        {
            left = 1 + callme(root->left);
            min_val = min(left, min_val);
        }

        int right ;
        if (root->right != nullptr)
        {
            right = 1 + callme(root->right);
            min_val = min(right, min_val);      
        }

        return min_val;
    }
    int minDepth(TreeNode* root) {
        int res = -1;
        int count = 0;
        res = callme(root);
        return res;
    }
};
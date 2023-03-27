#include<iostream>
using namespace std;

// Definition for a binary tree node.
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
    int height = 0;
    int callme(TreeNode* root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int left = callme(root->left);
        int right = callme(root->right);
        int maxi = left + right ;
        height = max(height, maxi);
        
        return max(left, right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        callme(root);
        return height;
    }
};
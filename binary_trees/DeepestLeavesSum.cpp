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
    int sum = 0;
    int callme(TreeNode* root, int& lheight)
    {
         if (root == nullptr)
            return 0;              
        
        if(height < lheight)
        {
            height = lheight;
            sum = root->val;
            cout<<"If "<<root->val<<" "<<height<<endl;
        }
        else if (height == lheight)
        {
            sum = sum + root->val;
            cout<<"else If "<<root->val<<" "<<height<<endl;
        }

        //cout<<" height "<<root->val<<" "<<height<<endl;

        callme(root->left, lheight  =  lheight+1);
        lheight = lheight - 1;
        callme(root->right, lheight = lheight+1);
        lheight = lheight - 1;

        
        return 0;
    }
    int deepestLeavesSum(TreeNode* root) {
        int lheight = 0;
        int rheight = 0;
       callme(root, lheight);
       cout<<"max height of tree "<<height<<endl;
       return sum;
        
    }
};
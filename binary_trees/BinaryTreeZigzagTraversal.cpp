#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vv;
        queue<TreeNode*> q;
        if (root != nullptr)
            q.push(root);
        
        bool flag = false;
        while(!q.empty())
        {
            int siz = q.size();
            vector<int> v;
            for(int i = 0; i<siz; i++)
            {
                TreeNode* tmp = nullptr;
                tmp = q.front();
                q.pop();
                v.push_back(tmp->val);            
                if (tmp->left != nullptr)
                    q.push(tmp->left);
                if (tmp->right != nullptr)
                    q.push(tmp->right);
            }
            flag = !flag;
            if (!flag)
                reverse(v.begin(), v.end());
            vv.push_back(v);
            
            
        }
        
    return vv;
    }
};
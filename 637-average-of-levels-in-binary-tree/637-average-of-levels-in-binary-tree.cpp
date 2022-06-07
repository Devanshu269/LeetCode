/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
       double sum=0,count=0;
        double x;
        while(q.size()>1)
        {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                q.push(NULL);
                
                x=sum/count;
                ans.push_back(x);
                count=0;
                sum=0;
                continue;
                
                
            }
            sum+=curr->val;
            count++;
            
            if(curr->left!=NULL)q.push(curr->left);
            if(curr->right!=NULL)q.push(curr->right);
        }
         x=sum/count;
        ans.push_back(x);
        return ans;
    }
};
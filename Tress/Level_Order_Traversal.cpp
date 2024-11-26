#include<bits/stdc++.h>
using namespace std;


//  * Definition for a binary tree node.
  struct TreeNode {
    int val;
    TreeNode *left;
     TreeNode *right;
     // constructors 
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        // 2D Vector OR Nested Vector
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q; // a queue data structure that stores data of TreeNode type 
        q.push(root);
        while(! q.empty()){
            int size = q.size();
            vector<int> v;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();  
                q.pop();
                if(node -> left != NULL) {
                    q.push(node -> left);
                }
                if( node -> right != NULL) {
                    q.push(node -> right);
                }
                v.push_back(node -> val);
            }
            ans.push_back(v);
        }
        return ans;

    }
};

int main ()
{

}
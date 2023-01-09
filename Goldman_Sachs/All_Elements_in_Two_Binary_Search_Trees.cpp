#include<bits/stdc++.h>
using namespace std;
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
void inorder(TreeNode* root, vector<int>&v)
{
    // vector<int>v;
    if(root)
    {inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right, v);}

}
void merge(vector<int>v1, vector<int>v2, vector<int>&mergevalue)
{
    int i=0, j=0, k=0;
    while(i<v1.size() && j< v2.size())
    {
        if(v1[i]<v2[j])
        {
            mergevalue[k]=v1[i];
            k++;
            i++;
        }
        else
         {
            mergevalue[k]=v2[j];
            k++;
            j++;
        }

    }
        while(i<v1.size())
        {
            mergevalue[k]=v1[i];
            k++;
            i++;
        }
        while(j<v2.size())
        {
            mergevalue[k]=v2[j];
            k++;
            j++;
        }

    

}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>t1, t2;
        inorder(root1, t1);
        inorder(root2, t2);
        vector<int>mergevalue(t1.size()+t2.size());
        merge(t1, t2, mergevalue);
        return mergevalue;

    }
};

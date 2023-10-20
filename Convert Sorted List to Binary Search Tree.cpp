class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int> v;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }

        return bst(v,0,v.size()-1);
    }

    TreeNode* bst(vector<int> v, int left, int right)
    {
        if(left > right)
        {
            return NULL;
        }

        int mid = left + (right - left)/2;

        TreeNode* root = new TreeNode(v[mid]);
        root->left = bst(v,left,mid-1);
        root->right = bst(v,mid+1,right);

        return root;
    }
};

class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
    queue<TreeNode *>qu;
    qu.push(root);
    int level=0;
    int prev;
    while(!qu.empty()){
        int size = qu.size();
        if(level%2==0){
             prev = INT_MIN;
        }
        else{
             prev = INT_MAX;
        }
        for(int i=0;i<size;i++){
            TreeNode *node = qu.front();
            qu.pop();
            int value = node->val; 
            if(level%2 == value%2){
                return false;
            }
            if((level%2 == 0 && value <= prev)||(level%2 == 1 && value >= prev)){
                return false;
            }
            prev = value;
            if(node->left!=NULL)
            {
                qu.push(node->left);
            }
            if(node->right!=NULL)
            {
                qu.push(node->right);
            }
        }
        level++;
    }
    return true;
    }
};

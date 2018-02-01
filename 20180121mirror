/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if(pRoot==NULL)
            return;
        if(pRoot->left!=NULL||pRoot->right!=NULL){
            TreeNode *q;
            q=pRoot->left;
            pRoot->left=pRoot->right;
            pRoot->right=q;
            Mirror(pRoot->left);
            Mirror(pRoot->right);
        }
    }
};

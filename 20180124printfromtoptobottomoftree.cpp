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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> a;
        deque<TreeNode *> b;
        if(root!=NULL){
            b.push_back(root);
            while(b.size()){
                TreeNode *p=b.front();
                b.pop_front();
                a.push_back(p->val);
                if(p->left)
                    b.push_back(p->left);
                if(p->right)
                    b.push_back(p->right);
            }
        }
        return a;
    }
};

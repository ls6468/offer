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
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int> > a;
        vector<int> b;
        finds(root,expectNumber,0,a,b);
        return a;
    }
    void finds(TreeNode* p,int elem,int sums,vector<vector<int> > &a,vector<int> &b){
        if(p==nullptr)
            return;
        sums+=p->val;
        b.push_back(p->val);
        bool isleaf=p->left==nullptr&&p->right==nullptr;
        if(isleaf&&sums==elem)
            a.push_back(b);
        if(p->left!=nullptr)
            finds(p->left,elem,sums,a,b);
        if(p->right!=nullptr)
            finds(p->right,elem,sums,a,b);
        b.pop_back();
    }
};
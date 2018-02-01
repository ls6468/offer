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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        TreeNode *plastnode=NULL;
        reptr(pRootOfTree,&plastnode);
        TreeNode *phead=plastnode;
        while(phead&&phead->left)
            phead=phead->left;
        return phead;
    }
    void reptr(TreeNode* p,TreeNode** plastnode){
        if(p==NULL)
            return;
        TreeNode *pcurrent=p;
        if(pcurrent->left)
            reptr(pcurrent->left,plastnode);
        pcurrent->left=*plastnode;
        if(*plastnode)
            (*plastnode)->right=pcurrent;
        *plastnode=pcurrent;
        if(pcurrent->right)
            reptr(pcurrent->right,plastnode);
    }
};

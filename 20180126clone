/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        clonenode(pHead);
        clonerandom(pHead);
        return connect(pHead);
    }
    void clonenode(RandomListNode* pHead){
        RandomListNode *pnode=pHead;
        while(pnode!=NULL){
            RandomListNode *pclone=new RandomListNode(pnode->label);
            pclone->next=pnode->next;
            pclone->random=NULL;
            pnode->next=pclone;
            pnode=pclone->next;
        }
    }
    void clonerandom(RandomListNode* pHead){
        RandomListNode *pnode=pHead;
        while(pnode!=NULL){
            RandomListNode* pclonenode=pnode->next;
            if(pnode->random!=NULL)
                pclonenode->random=pnode->random->next;
            pnode=pclonenode->next;
        }
    }
    RandomListNode* connect(RandomListNode* pHead){
        RandomListNode *pnode=pHead;
        RandomListNode *pclonehead=NULL;
        RandomListNode *pclonenode=NULL;
        if(pnode!=NULL){
            pclonehead=pclonenode=pnode->next;
            pnode->next=pclonenode->next;
            pnode=pnode->next;
        }
        while(pnode!=NULL){
            pclonenode->next=pnode->next;
            pclonenode=pclonenode->next;
            pnode->next=pclonenode->next;
            pnode=pnode->next;
        }
        return pclonehead;
    }
};

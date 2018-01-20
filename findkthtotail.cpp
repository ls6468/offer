/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead==NULL||k==0){
            return NULL;
        }
        ListNode *p=pListHead;
        ListNode *q=NULL;
        for(unsigned int i=0;i<k-1;i++){
           if(p->next!=NULL){
               p=p->next;
           }
           else{
               return NULL;
           }
        }
        q=pListHead;
        while(p->next!=NULL){
            p=p->next;
            q=q->next;
        }
        return q;
        
    }
};
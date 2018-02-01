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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1==NULL){
            return pHead2;
        }
        if(pHead2==NULL){
            return pHead1;
        }
        ListNode *pmerge=NULL;
        if(pHead1->val<pHead2->val){
            pmerge=pHead1;
            pmerge->next=Merge(pHead1->next,pHead2);
        }
        else{
            pmerge=pHead2;
            pmerge->next=Merge(pHead1,pHead2->next);
        }
        return pmerge;
    }
};

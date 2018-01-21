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
    ListNode* ReverseList(ListNode* pHead) {
        
        ListNode *prH=NULL,*p=pHead,*pr=NULL;
        while(p!=NULL){
            ListNode *pl=p->next;
            if(pl==NULL){
                prH=p;
            }
            p->next=pr;
            pr=p;
            p=pl;
        }
        return prH;
    }
};
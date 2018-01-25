class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        bool result=true;
        int a=sequence.size(),j=0,i;
        vector<int> b,c;
        if(a<=0)
            return false;
        while(sequence[j]<sequence[a-1]){
            b.push_back(sequence[j]);
            j++;
        }
        for(i=j;i<a-1;i++){
            if(sequence[i]<sequence[a-1]){
                result=false;
                break;
            }
            c.push_back(sequence[i]);
        }
        if(i==a-1&&b.size()>0)
            VerifySquenceOfBST(b);
        if(i==a-1&&c.size()>0)
            VerifySquenceOfBST(c);
        return result;
    }
};
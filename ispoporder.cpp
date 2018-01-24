class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        bool result=false;
        stack<int> a;
        if(pushV.size()>0&&popV.size()>0){
            int k=0,i,j;
            for(i=0;i<pushV.size();i++){
                if(a.size()>0&&a.top()==popV[i]){
                    a.pop();
                    continue;
                }else{
                    for(j=k;j<pushV.size();j++){
                        if(popV[i]==pushV[j]){
                            a.push(pushV[j]);
                            a.pop();
                            break;
                        }
                        else{
                            a.push(pushV[j]);
                        }
                    }
                    k=j+1;
                }
            }
        }
        if(a.size()==0){
            result=true;
        }
        return result;
    }
};
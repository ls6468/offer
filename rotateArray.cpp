class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int length=rotateArray.size();
        if(length<=0){
            throw new exception();
        }
        int index1=0,index2=length-1;
        int indexmid=index1;
        while(rotateArray[index1]>=rotateArray[index2]){
            if(index2-index1==1){
                indexmid=index2;
                break;
            }
            indexmid=(index1+index2)/2;
            if(rotateArray[index1]==rotateArray[index2]&&rotateArray[index1]==rotateArray[indexmid]){
                return shunxu(rotateArray,index1,index2);
            }
            if(rotateArray[indexmid]>=rotateArray[index1]){
                index1=indexmid;
            }
            else{
                index2=indexmid;
            }
        }
        return rotateArray[indexmid];
    }
    int shunxu(vector<int> rotateArray,int index1,int index2){
        int a=rotateArray[index1];
        for(int i=index1+1;i<=index2;i++){
            if(a>rotateArray[i]){
                a=rotateArray[i];
            }
        }
        return a;
    }
};
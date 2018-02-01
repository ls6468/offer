class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int len=array.size();
        int i,j,k,n,x=0;
        for(i=0;i<len;i++){
            if(array[i]%2==0){
                for(j=i+x;j<len;j++){
                    if(array[j]%2==0){
                        x++;
                    }
                    else{
                        n=array[j];
                        for(k=0;k<x;k++){
                            array[j]=array[j-1];
                            j--;
                        }
                        array[i]=n;
                        break;
                    }
                }
            }
        }
    }
};

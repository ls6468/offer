class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int n=array.size();
        int sum=0,max_sum=array[0];
        for(int i=0;i<n;i++){
            sum+=array[i];
            if(sum>max_sum)
                max_sum=sum;
            if(sum<0)
                sum=0;
        }
        return max_sum;
    }
};

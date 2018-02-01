//ÓÐÎÊÌâ
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        int n=input.size();
        int start=0,end=n-1;
        vector<int> a;
        if(end>-1){
            int index=partition(input,start,end,n);
            while(index!=k-1){
                if(index>k-1){
                    end=index-1;
                    index=partition(input,start,end,n);
                }
                else{
                    start=index+1;
                    index=partition(input,start,end,n);
                }
            }
            for(int i=0;i<k;i++)
                a.push_back(input[i]);
        }
        return a;
    }
    int partition(vector<int> input,int start,int end,int n){
        if(input.empty()||start<0||end>=n||n<=0)
            throw new std::exception;
        int index=((double)rand()/RAND_MAX)*(end-start)+start;
        swap(&input[index],&input[end]);
        int small=start-1;
        for(int i=start;i<end;i++){
            if(input[i]<input[end]){
                small++;
                if(small!=index)
                    swap(&input[small],&input[index]);
            }
        }
        small++;
        swap(&input[small],&input[end]);
        return small;
    }
    void swap(int *a,int *b){
        int t=*a;
        *a=*b;
        *b=t;
    }
};

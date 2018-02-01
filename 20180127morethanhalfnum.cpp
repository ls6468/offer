class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int result=0;
        if(numbers.size()>0){
            result=numbers[0];
            int times=1;
            for(int i=1;i<numbers.size();i++){
                if(times==0){
                    result=numbers[i];
                    times=1;
                }
                else if(result==numbers[i])
                    times++;
                else
                    times--;
            }
        }
        if(!checktimes(numbers,result))
            result=0;
        return result;
    }
    bool checktimes(vector<int> numbers,int n){
        int times=0;
        for(int i=0;i<numbers.size();i++){
            if(numbers[i]==n)
                times++;
        }
        if(times*2>numbers.size())
            return true;
        else
            return false;
    }
};

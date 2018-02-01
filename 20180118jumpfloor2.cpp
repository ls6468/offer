class Solution {
public:
    int jumpFloorII(int number) {
        if(number==1){
            return 1;
        }
        int f1=1,f;
        for(int i=2;i<=number;i++){
            f=2*f1;
            f1=f;
        }
        return f;
    }
};

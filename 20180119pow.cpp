class Solution {
public:
    double Power(double base, int exponent) {
        if(equal(base,0.0)){
            return 0.0;
        }
        unsigned int exp=(unsigned int)exponent;
        if(exponent<0){
            exp=(unsigned int)(-exponent);
        }
        double result=pk(base,exp);
        if(exponent<0){
            result=1.0/result;
        }
        return result;
    }
    double pk(double base,unsigned int exp){
        if(exp==0){
            return 1;
        }
        if(exp==1){
            return base;
        }
        double result=pk(base,exp>>1);
        result*=result;
        if(exp&0x1==1){
            result=result*base;
        }
        return result;
    }
    bool equal(double num1,double num2){
        if((num1-num2)>-0.0000001&&(num1-num2)<0.0000001){
            return true;
        }
        else{
            return false;
        }
    }
};

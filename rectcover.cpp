class Solution {
public:
    int rectCover(int number) {
        int a[]={1,2};
        if(number<=2){
            return a[number-1];
        }
        int f1=2,f2=1,f;
        for(int i=3;i<=number;i++){
            f=f1+f2;
            f2=f1;
            f1=f;
        }
        return f;
    }
};
class Solution {
public:
    int Fibonacci(int n) {
        int a[]={0,1};
        if(n<2){
            return a[n];
        }
        int f1=1,f2=0;
        int f;
        for(int i=2;i<=n;i++){
            f=f1+f2;
            f2=f1;
            f1=f;
        }
        return f;
    }
};
class Solution {
public:
     int  NumberOf1(int n) {
         int a=0;
         while(n){
             a++;
             n=(n-1)&n;
         }
         return a;
     }
};
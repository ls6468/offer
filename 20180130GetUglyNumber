class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index<=0)
            return 0;
        int *p=new int[index];
        p[0]=1;
        int next=1;
        int *p2=p,*p3=p,*p5=p;
        while(next<index){
            int min=minuglynumer(*p2*2,*p3*3,*p5*5);
            p[next]=min;
            while(*p2*2<=p[next])
                p2++;
            while(*p3*3<=p[next])
                p3++;
            while(*p5*5<=p[next])
                p5++;
            next++;
        }
        int ugly=p[index-1];
        return ugly;
    }
    int minuglynumer(int a,int b,int c){
        int min=(a<b)?a:b;
        min=(min<c)?min:c;
        return min;
    }
};

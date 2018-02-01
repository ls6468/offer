class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        char a[50];
        if(n<=0)
            return 0;
        sprintf(a,"%d",n);
        return numberof1(a);
    }
    int numberof1(const char* p){
        if(!*p||*p=='\0'||*p<'0'||*p>'9')
            return 0;
        int first=*p-'0';
        unsigned int length=(unsigned int)(strlen(p));
        if(first==0&&length==1)
            return 0;
        if(first>0&&length==1)
            return 1;
        int numfirstdigit=0;
        if(first>1)
            numfirstdigit=powerbaseten(length-1);
        else if(first==1)
            numfirstdigit=atoi(p+1)+1;
        int numotherdigit=first*(length-1)*powerbaseten(length-2);
        int numrecursive=numberof1(p+1);
        return numfirstdigit+numotherdigit+numrecursive;
    }
    int powerbaseten(unsigned int n){
        int r=1;
        for(unsigned int i=0;i<n;i++){
            r*=10;
        }
        return r;
    }
};

//ÓÐÎÊÌâ
class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> a;
        if(str!='\0')
            permutation(&str,&str,&a);
        return a;
    }
    void permutation(char *p,char *q,vector<string> a){
        if(q=='\0')
            a.push_back(p);
        else{
            for(char *ch=q;ch!='\0';++ch){
                char t=*ch;
                *ch=*q;
                *q=t;
                permutation(p,q+1,a);
                t=*ch;
                *ch=*q;
                *q=t;
            }
        }
    }
};

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        int len=str.length();
        map<char,int> hash;
        if(len<=0)
            return -1;
        for(int i=0;i<len;i++){
            hash[str[i]]++;
        }
        for(int i=0;i<len;i++){
            if(hash[str[i]]==1)
                return i;
        }
        return -1;
    }
};

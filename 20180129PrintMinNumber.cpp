class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        int size=numbers.size();
        string result;
        const int maxnumberlength=10;
        char** strnumber=(char**)(new int[maxnumberlength]);
        if(size>0){
            for(int i=0;i<size;i++){
                strnumber[i]=new char[maxnumberlength+1];
                sprintf(strnumber[i],"%d",numbers[i]);
            }
            qsort(strnumber,size,sizeof(char *),cmp);
            for(int i=0;i<size;i++){
                result+=strnumber[i];
            }
        }
        return result;
    }
    static int cmp(const void* str1,const void* str2){
        const int maxnumberlength=10;
        char* a=new char[maxnumberlength*2+1];
        char* b=new char[maxnumberlength*2+1];
        strcpy(a,*(const char**)str1);
        strcat(a,*(const char**)str2);
        strcpy(b,*(const char**)str2);
        strcat(b,*(const char**)str1);
        return strcmp(a,b);
    }
};

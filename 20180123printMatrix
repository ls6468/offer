class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> a;
        vector<int> b;
        int row=matrix.size();
        int column=matrix[0].size();
        int start=0;
        if(row<=0||column==0)
            return b;
        while(row>start*2&&column>start*2){
            a=printofcircle(matrix,start,row,column);
            for(unsigned long i=0;i<a.size();i++){
                b.push_back(a[i]);
            }
            start++;
        }
        return b;
    }
    vector<int> printofcircle(vector<vector<int> > matrix,int start,int row,int column){
        vector<int> a;
        int endx=column-1-start,endy=row-1-start;
        for(int i=start;i<=endx;i++){
            a.push_back(matrix[start][i]);
        }
        if(endy>start){
            for(int i=start+1;i<=endy;i++){
                a.push_back(matrix[i][endx]);
            }
        }
        if(endx>start&&endy>start){
            for(int i=endx-1;i>=start;i--){
                a.push_back(matrix[endy][i]);
            }
        }
        if(endy-1>start&&endx>start){
            for(int i=endy-1;i>=start+1;i--){
                a.push_back(matrix[i][start]);
            }
        }
        return a;
    }
};

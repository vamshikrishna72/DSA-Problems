class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int l=0,r=m-1;
        int top = 0,bot=n-1;
        vector<int>res;
        while(top <= bot && l<=r){
            for(int i=l;i<=r;i++){
                res.push_back(mat[top][i]);
            }
            top++;
            for(int i=top;i<=bot;i++){
                res.push_back(mat[i][r]);
            }
            r--;
            if(top<=bot){
                for(int i=r;i>=l;i--){
                    res.push_back(mat[bot][i]);
                }
                bot--;
            }
            if(l<=r){
                for(int i=bot;i>=top;i--){
                    res.push_back(mat[i][l]);
                }
                l++;
            }
        }
        return res;
    }
};
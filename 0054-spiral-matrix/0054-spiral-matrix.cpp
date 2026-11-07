class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0,r = n- 1,top = 0,bot=m-1;
        vector<int>ans;
        while(top <=bot && l<=r){
            for(int i=l;i<=r;i++){
                ans.push_back(matrix[top][i]);

            }
            top++;
            for(int i=top;i<=bot;i++){
                ans.push_back(matrix[i][r]);
            }
            r--;
            if(top<=bot){
                for(int i=r;i>=l;i--){
                    ans.push_back(matrix[bot][i]);
                }
                bot--;
            }
            if(l <= r){
                for(int i=bot;i>=top;i--){
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
};
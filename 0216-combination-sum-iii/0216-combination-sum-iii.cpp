class Solution {
private:
    void solve(int i,int n,int k,vector<vector<int>>& ans,vector<int>& ds){
        if(k == 0 && n == 0) {
            ans.push_back(ds);
            return;
        }
        if(i > 9 || n < 0 || k < 0) return;
    
        
        ds.push_back(i);
        solve(i+1,n-i,k-1,ans,ds);
        ds.pop_back();
        solve(i+1,n,k,ans,ds);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>ds;
        solve(1,n,k,ans,ds);
        return ans;
    }
};
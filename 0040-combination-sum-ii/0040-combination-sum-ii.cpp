class Solution {
private:
    void combinationSearch(int ind,int target,vector<int>& arr,vector<vector<int>> &ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i = ind;i < arr.size();i++){
            if(arr[i] > target) break;
            if(i > ind && arr[i] == arr[i-1]) continue;
            ds.push_back(arr[i]);
            combinationSearch(i+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        combinationSearch(0,target,candidates,ans,ds);
        return ans;
    }
};
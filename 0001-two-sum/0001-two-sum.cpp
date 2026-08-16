class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }
        sort(indexedNums.begin(),indexedNums.end());
        int l=0;
        int r = nums.size()-1;
        vector<int>ans;
        while(l<r){
            int sum = indexedNums[l].first + indexedNums[r].first;
            if(sum == target){
                ans.push_back(indexedNums[l].second);
                ans.push_back(indexedNums[r].second);
            }
            if(sum < target) l++;
            else r--;                
        }
        return ans;
    }
};
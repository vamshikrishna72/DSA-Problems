class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mini_val = INT_MAX;
        int sum = 0;
        for(int i=0;i<n;i++){
            if(nums[i] < mini_val) mini_val = nums[i];
            sum += nums[i];
        }
        int ans = sum - (mini_val*n);
        return ans;
    }
};
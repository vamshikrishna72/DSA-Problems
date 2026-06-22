class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        vector<int> ans(2,-1);
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= target){
                if(nums[mid] == target) ans[0] = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        int low1 = 0;
        int high1 = n - 1;
        
        while(low1 <= high1){
            int mid = (low1 + high1)/2;
            if(nums[mid] <= target){
                if(nums[mid] == target) ans[1] = mid;
                low1 = mid+1;
            }
            else high1 = mid-1;
        }
        return ans;
    }
};
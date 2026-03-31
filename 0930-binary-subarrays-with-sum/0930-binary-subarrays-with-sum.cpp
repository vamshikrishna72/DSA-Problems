class Solution {
    int almost(vector<int>&nums,int goal){
        int l=0,r=0,cnt=0,sum=0;
        int n=nums.size();
        if(goal < 0) return 0;
        while(r < n){
            sum = sum + nums[r];
            while(sum > goal){
                sum = sum - nums[l];
                l++;
            }
            cnt = cnt + (r-l+1);
            r++;
        }
    return cnt;;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return almost(nums,goal)-almost(nums,goal-1);
    }
};
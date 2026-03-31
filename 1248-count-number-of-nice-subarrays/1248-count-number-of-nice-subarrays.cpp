class Solution {
    int almost(vector<int>&nums,int k){
        if(k < 0) return 0;
        int l=0,r=0,n=nums.size();
        int res=0,cnt_odd=0;
        while(r < n){
            cnt_odd += nums[r]%2;
            while(cnt_odd > k){
                cnt_odd-=nums[l]%2;
                l++;
            }
            res = res + (r-l+1);
            r++;
        }
        return res;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return almost(nums,k) - almost(nums,k-1);
    }
};
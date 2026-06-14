class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long int maxFreq = 0,n = nums.size(),l=0,r=0,total=0;
        for(r=0;r<n;r++){
            total += nums[r];
            
            while(l+1<=r && (nums[r] * (r-l+1)) > total + k){
                total = total - nums[l];
                l++;
            }
            maxFreq = max(maxFreq,r-l+1);
        }
        return maxFreq;
    }
};
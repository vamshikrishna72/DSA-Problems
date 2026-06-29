class Solution {
public:
    long long maxSubarraySum(std::vector<int>& nums, int k) {
        int n = nums.size();
        long long INF = 1e18;
        vector<long long> min_prefix(k, INF);
        min_prefix[0] = 0;
        long long current_prefix = 0;
        long long max_sum = -INF; 
        
        for (int i = 0; i < n; ++i) {
            current_prefix += nums[i];
            int remainder = (i + 1) % k;
            
            if (min_prefix[remainder] != INF) {
                max_sum = max(max_sum, current_prefix - min_prefix[remainder]);
            }
            
            min_prefix[remainder] = min(min_prefix[remainder], current_prefix);
        }
        
        return max_sum;
    }
};

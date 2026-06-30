class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n = nums.size();
        
        vector<int> diff(n + 1, 0);
        for (const auto& req : requests) {
            diff[req[0]]++;
            diff[req[1] + 1]--;
        }
        
        vector<int> freq(n, 0);
        int current_freq = 0;
        for (int i = 0; i < n; ++i) {
            current_freq += diff[i];
            freq[i] = current_freq;
        }
        
    
        sort(nums.begin(), nums.end());
        sort(freq.begin(), freq.end());
        
       
        long long total_sum = 0;
        long long MOD = 1e9 + 7;
        for (int i = 0; i < n; ++i) {
            total_sum = (total_sum + (long long)nums[i] * freq[i]) % MOD;
        }
        
        return total_sum;
    }
};

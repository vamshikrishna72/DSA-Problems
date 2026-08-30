class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return n;

        auto mn = min_element(nums.begin(),nums.end());
        auto mx = max_element(nums.begin(),nums.end());
        int min_idx = distance(nums.begin(),mn);
        int max_idx = distance(nums.begin(),mx);
        int i = min(min_idx,max_idx);
        int j = max(min_idx,max_idx);
        int delete_from_front = j + 1;
        int delete_from_back = n - i;
        int delete_from_both = (i + 1) + (n - j);
        return min({delete_from_front,delete_from_back,delete_from_both});
        
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int>st(nums.begin(),nums.end());
        int i=0;
        for (int x : st) {
            nums[i++] = x;
        }
        return st.size();
    }
};
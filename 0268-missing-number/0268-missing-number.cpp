class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int sumA = 0;
        for(int i : nums){
            sumA += i;
        }
        return sum - sumA;
    }
};
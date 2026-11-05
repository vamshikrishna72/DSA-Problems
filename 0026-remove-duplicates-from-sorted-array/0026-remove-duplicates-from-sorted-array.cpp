class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int sz = 0;
        int l=0;
        for(int i=0;i<n;i++){
            if(nums[l] != nums[i]){
                l++;
                nums[l] = nums[i];
            }
        }
        return l+1;
    }
};
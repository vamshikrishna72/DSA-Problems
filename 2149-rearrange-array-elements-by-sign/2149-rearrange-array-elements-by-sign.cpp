class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int l = 0;
        int r = 1;
        for(int num : nums){
            if(num > 0){
                res[l] = num;
                l+=2;
            }
            
            else{
                res[r] = num;
                r+=2;
            }
        }
        return res;
    }
};
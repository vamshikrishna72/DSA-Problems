class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCnt = 0;
        for(int i:nums){
            if(i == 1){
                currentCnt++;
                maxCount = max(currentCnt,maxCount);
            }
            else{
                currentCnt = 0;
            }
        }
        return maxCount;
    }
};
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int cnt=0;
        int maxF = INT_MIN;
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            maxF = max(maxF,it.second);
        }
    
        for(auto it:mpp){
            if(it.second == maxF){
                cnt+=it.second;
            }
        }
    return cnt;
    }
};
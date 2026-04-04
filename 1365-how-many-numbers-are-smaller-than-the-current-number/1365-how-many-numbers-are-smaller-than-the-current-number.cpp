// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>res;
//         for(int i=0;i<n;i++){
//             int cnt=0;
//             for(int j=0;j<n;j++){
//                 if(i!=j && nums[j] < nums[i]){
//                     cnt++;
//                 }
//             }
//             res.push_back(cnt);
//         }
//     return res;
//     }
// };


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> sorted = nums;
        sort(sorted.begin(),sorted.end());
        vector<int>res;
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            if(mp.find(sorted[i]) == mp.end()){
                mp[sorted[i]]=i;
            }
        }
        for(int x:nums){
            res.push_back(mp[x]);
        }
        return res;
    }
};
// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         int n=nums.size();
//         map<int,int>mpp;
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             mpp.clear();
//             for(int j=i;j<n;j++){
//                 mpp[nums[j]]++;
//                 if(mpp.size()==k){
//                     cnt++;
//                 }
//                 else if(mpp.size()>k) break;
//             }
//         }
//         return cnt;
//     }
// };



class Solution {
private:
    int atMost(vector<int>& nums,int k){
        int n=nums.size();
        int l=0,r=0;
        int cnt=0;
        map<int,int>mpp;
        while(r < n){
            mpp[nums[r]]++;
            while(mpp.size() > k){
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l++;
            }
        cnt = cnt + (r-l+1);
        r++;
        }
        return cnt;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};
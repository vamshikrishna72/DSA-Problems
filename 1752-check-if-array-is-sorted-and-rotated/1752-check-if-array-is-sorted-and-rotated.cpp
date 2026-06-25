// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();
//         int low = 0;
//         int high = n - 1;
//         while(low < high){
//             int mid = (low + (high - low))/2;
//             if(nums[mid] > nums[high]){
//                 low = mid+1;
//             }
//             else{
//                 high=mid;
//             }
//         }
//         for(int i=low;i<n-1;i++){
//             if(nums[i] > nums[i+1]) return false;
//             continue;
//         }
//         for(int i=0;i<low;i++){
//             if(nums[i] > nums[i+1]) return false;
//             continue;
//         }
//         return true;
//     }
// };


class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drop_count = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                drop_count++;
            }
        }
        
        return drop_count <= 1;
    }
};

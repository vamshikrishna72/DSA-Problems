// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n=nums.size();
//         int high = n-1;
//         int low = 0;
//         while(low <= high){
//             int mid = low + (high - low)/2;
//             if(nums[mid] > nums[high]){
//                 low = mid + 1;
//             }
//             else{
//                 high = mid;
//             }
//         }
//         return nums[low];
//     }
// };


class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // If mid element is greater than high element, min is on the right
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } 
            
            else {
                high = mid;
            }
        }
        return nums[low];
    }
};

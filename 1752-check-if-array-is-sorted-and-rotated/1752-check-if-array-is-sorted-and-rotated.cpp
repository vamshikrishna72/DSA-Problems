class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i] > nums[(i+1)%n]) count++;
            
        }
        return count <= 1;
    }
};


// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();
//         int low = 0;
//         int high = n - 1;
        
//         while(low < high){
//             int mid = low + (high - low) / 2;
//             if(nums[mid] > nums[high]){
//                 low = mid + 1;
//             }
//             else if (nums[mid] < nums[high]) {
//                 high = mid;
//             }
//             else {
//                 high--;
//             }
//         }
        
//         int pivot = low;

//         for (int i = 0; i < n - 1; i++) {
//             int curr = (pivot + i) % n;
//             int next = (pivot + i + 1) % n;
//             if (nums[curr] > nums[next]) {
//                 return false;
//             }
//         }

//         return true;
//     }
// };





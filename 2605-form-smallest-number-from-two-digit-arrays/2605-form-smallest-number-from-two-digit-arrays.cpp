class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int min1=nums1[0];
        int min2=nums2[0];
        unordered_map<int,int>mpp;
        mpp[nums1[0]]++;
        for(int i=1;i<n1;i++){
            if(nums1[i]<min1) min1 = nums1[i];
            mpp[nums1[i]]++;
        }
        mpp[nums2[0]]++;
        for(int i=1;i<n2;i++){
            if(nums2[i]<min2) min2 = nums2[i];
            mpp[nums2[i]]++;
        }

        int minCommon = 10;
        for(auto num : mpp){
            if(num.second >= 2) {
                if(num.first <  minCommon) minCommon = num.first;
            }
        }
        if(minCommon != 10) return minCommon;
        if(min1 < min2) return (min1*10)+min2;
        else return (min2 * 10)+min1;
    }
};



// class Solution { 
// public: 
//     int minNumber(vector<int>& nums1, vector<int>& nums2) { 
//         int n1 = nums1.size(); 
//         int n2 = nums2.size(); 
        
//         int min1 = nums1[0]; 
//         int min2 = nums2[0]; 
        
//         unordered_map<int, int> mpp; 
//         mpp[nums1[0]]++;
//         for(int i = 1; i < n1; i++){ 
//             if(nums1[i] < min1) min1 = nums1[i]; 
//             mpp[nums1[i]]++;
//         } 
        
//         mpp[nums2[0]]++;
//         for(int i = 1; i < n2; i++){ 
//             if(nums2[i] < min2) min2 = nums2[i]; 
//             mpp[nums2[i]]++; 
//         } 
        
//         int minCommon = 10; 
//         for(auto num : mpp){ 
//             if(num.second >= 2) {
//                 if(num.first < minCommon) minCommon = num.first;
//             }
//         } 
       
//         if(minCommon != 10) return minCommon; 
        
//         if(min1 < min2) return (min1 * 10) + min2; 
//         else return (min2 * 10) + min1; 
//     } 
// };

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(nums1.begin(),nums1.end());
        vector<int>res;
        for(int i : nums2){
            if(st1.count(i)){ 
                res.push_back(i);
                st1.erase(i);
            }
        }
        return res;
    }
};
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            res.push_back(to_string(nums[i]));
        }
        sort(res.begin(),res.end(),[](const string &a,const string &b){
            return a+b > b+a;
        });
        if(res[0]=="0") return "0";
        string ans = "";
        for(int i=0;i<n;i++){
            ans+=res[i];
        }
        return ans;
    }
};
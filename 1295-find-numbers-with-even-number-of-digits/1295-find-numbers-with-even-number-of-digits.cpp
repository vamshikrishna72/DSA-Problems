class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            int digC = 0;
            int m = nums[i];
            while(m > 0){
                int ld = m % 10;
                m=m/10;
                digC++;
            }
            if(digC%2 == 0) cnt++;
        }
        return cnt;
    }
};
class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n=batteryPercentages.size();
        int cnt = 0;
        int dec = 0;

        for(int i=0;i<n;i++){
            int curr = batteryPercentages[i] - dec;
            if(curr > 0){
                cnt++;
                dec++;
            }
        }
        return cnt;
    }
};
// class Solution {
// public:
//     int calculateTotalHours(vector<int>& piles, int speed){
//         int n = piles.size();
//         int totalH = 0;
//         for(int bananas : piles){
//             totalH += ceil((double)bananas/speed);
//         }
//         return totalH;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         // int low = *min_element(piles.begin(),piles.end());
//         int low = 1;
//         int high = *max_element(piles.begin(),piles.end());
//         int ans = high;
        
//         while(low <= high){
//             int mid = (low + (high-low)) / 2;
//             int totalH = calculateTotalHours(piles,mid);
//             if(totalH <= h){
//                 ans = mid;
//                 high = mid-1;
//             }
//             else low = mid+1;

//         }
//         return ans;
//     }
// };


class Solution {
public:
    long long calculateTotalHours(vector<int>& piles, int speed){
        long long totalH = 0;
        for(int bananas : piles){
            totalH += ceil((long long)bananas+speed-1) /speed;
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while(low <= high){
            int mid = low + (high - low) / 2; 
            long long totalH = calculateTotalHours(piles, mid);

            if(totalH <= h){
                ans = mid;
                high = mid - 1; 
            } 
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

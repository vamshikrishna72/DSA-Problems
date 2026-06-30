class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n + 1, 0);
        
        for (const auto& booking : bookings) {
            int modhalupettu = booking[0] - 1;
            int mugimpu = booking[1] - 1;
            int kurchilu = booking[2];
            
            diff[modhalupettu] += kurchilu;
            diff[mugimpu + 1] -= kurchilu;
        }
        
        vector<int> answer(n, 0);
        int current_seats = 0;
        for (int i = 0; i < n; ++i) {
            current_seats += diff[i];
            answer[i] = current_seats;
        }
        
        return answer;
    }
};

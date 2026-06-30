class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n + 1, 0);
        
        for (const auto& booking : bookings) {
            int first = booking[0] - 1;
            int last = booking[1] - 1;
            int seats = booking[2];
            
            diff[first] += seats;
            diff[last + 1] -= seats;
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

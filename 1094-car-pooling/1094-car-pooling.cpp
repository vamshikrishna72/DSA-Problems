class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> passengersChange(1005, 0);
    
        for (const auto& trip : trips) {
            int passengers = trip[0];
            int start = trip[1];
            int end = trip[2];
            
            passengersChange[start] += passengers;
            passengersChange[end] -= passengers;
        }
        
        int currentPassengers = 0;
        for (int i = 0; i <= 1000; ++i) {
            currentPassengers += passengersChange[i];
            
            if (currentPassengers > capacity) {
                return false;
            }
        }
        
        return true;
    }
};
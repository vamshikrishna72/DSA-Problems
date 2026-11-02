#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

class Solution {
public:
    int minMoves2(std::vector<int>& nums) {
        auto mid = nums.begin() + nums.size() / 2;
        std::nth_element(nums.begin(), mid, nums.end());
        int med = *mid;
        int mov = 0;
        
        for (int num : nums) {
            mov += std::abs(num - med);
        }
        
        return mov;
    }
};

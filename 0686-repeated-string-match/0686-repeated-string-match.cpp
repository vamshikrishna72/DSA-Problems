#include <string>
#include <cmath>

class Solution {
public:
    int repeatedStringMatch(std::string a, std::string b) {
        int count = std::ceil((double)b.length() / a.length());
     
        std::string repeated = "";
        for (int i = 0; i < count; ++i) {
            repeated += a;
        }
       
        if (repeated.find(b) != std::string::npos) {
            return count;
        }
        
        repeated += a;
        if (repeated.find(b) != std::string::npos) {
            return count + 1;
        }
        
        return -1;
    }
};

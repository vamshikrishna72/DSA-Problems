
class Solution {
public:
    string getHappyString(int n, int k) {
        int total = 3 * pow(2, n - 1);
        
        if (k > total) return "";

        string res = "";
        vector<char> chars = {'a', 'b', 'c'};
        
        k--; 
        int partitionSize = pow(2, n - 1);
        res += chars[k / partitionSize];
        k %= partitionSize;

        for (int i = 1; i < n; i++) {
            vector<char> available;
            for (char c : chars) {
                if (c != res.back()) {
                    available.push_back(c);
                }
            }
            
            partitionSize /= 2;
            
            res += available[k / partitionSize];
            k %= partitionSize;
        }

        return res;
    }
};

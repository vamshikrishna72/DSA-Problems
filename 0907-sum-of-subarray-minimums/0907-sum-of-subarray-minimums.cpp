#include <vector>
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
    // Function to find the Nearest Smaller to Left (NSL) index
    vector<int>findPSE(const vector<int>& arr, int n) {
        vector<int> left(n, -1);
        stack<int> st; // Stores indices
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                left[i] = st.top();
            }
            st.push(i);
        }
        return left;
    }

    // Function to find the Nearest Smaller to Right (NSR) index
    vector<int> findNSE(const vector<int>& arr, int n) {
        vector<int> right(n, n);
        stack<int> st; // Stores indices
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                right[i] = st.top();
            }
            st.push(i);
        }
        return right;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse = findPSE(arr, n);
        vector<int> nse = findNSE(arr, n); 

        long long total = 0;
        const int mod = 1e9 + 7;

        for (int i = 0; i < n; ++i) {
            long long leftCount = i - pse[i];
            long long rightCount = nse[i] - i;
            long long ways = (leftCount * rightCount) % mod;
            long long contribution = (ways * arr[i]) % mod;
            total = (total + contribution) % mod;
        }
        return total;
    }
};

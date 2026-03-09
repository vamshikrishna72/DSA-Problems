class Solution {
private:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxArea = 0;
        int n = heights.size();
        for(int i = 0;i<n;i++){
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                int element = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();
                maxArea = max(heights[element] * (nse - pse - 1),maxArea);
            }
            st.push(i);
        }
        while(!st.empty()){
            int nse = n;
            int element = st.top();
            st.pop();
            int pse =  st.empty() ? -1 : st.top();
            maxArea = max(heights[element]*(nse - pse - 1),maxArea);
        }
        return maxArea;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxArea = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> height(m,0);
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j] == '1') height[j]++;
                else{
                    height[j] = 0;
                }
            }
            int area = largestRectangleArea(height);
            maxArea = max(maxArea,area);
        }
    return maxArea;
    }
};
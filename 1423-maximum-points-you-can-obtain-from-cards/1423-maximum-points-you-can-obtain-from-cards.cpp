class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum=0,rSum=0,maxSum=0;
        int n = cardPoints.size();
        for(int i=0;i<k;i++){
            lSum+=cardPoints[i];
        }
        maxSum = lSum;
        for(int i=0;i<k;i++){
            lSum =lSum-cardPoints[k-1-i];
            rSum=rSum+cardPoints[n-1-i];
            maxSum=max(maxSum,(rSum+lSum));
        }
        return maxSum;
    }
};
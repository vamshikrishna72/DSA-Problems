class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum=0,rSum=0,maxSum=0;
        int n = cardPoints.size();
        for(int i=0;i<k;i++){
            lSum+=cardPoints[i];
        }
        maxSum = lSum;
        int cnt=k;
        int i=k-1;
        int j=n-1;
        while(cnt--){
            lSum =lSum-cardPoints[i];
            rSum=rSum+cardPoints[j];
            maxSum=max(maxSum,(rSum+lSum));
            i--;
            j--;
        }
        return maxSum;
    }
};
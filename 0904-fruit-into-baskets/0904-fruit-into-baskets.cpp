class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int count = 0;
        for(int i : fruits){
            if(i > 0) count++;
        }
        return count;
    }
};
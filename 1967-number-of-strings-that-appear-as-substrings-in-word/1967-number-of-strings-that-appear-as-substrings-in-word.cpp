class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for(int i=0;i<patterns.size();i++){
            // for(int j=0;j<word.length();j++){
            //     if(patterns[i] == word[j]){
            //       cnt++;
            //       break;  
            //     } 
            // }
            if (word.find(patterns[i]) != std::string::npos) {
                count++;
            }
        }
        return count;
    }
};
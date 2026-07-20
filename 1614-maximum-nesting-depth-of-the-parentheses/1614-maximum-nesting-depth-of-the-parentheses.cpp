class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int max_depth=0;
        int depth=0;
        for(char c:s){
            if(c == '('){
                depth++;
                max_depth = max(max_depth,depth);

            }
            else if(c == ')'){
                depth--;
            }
        }
        return max_depth;
    }
};
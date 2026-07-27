class Solution {
public:
    vector<string> ans;
    void fun(string current,int open,int close,int n){
        if(current.size() == 2*n){
            ans.push_back(current);
            return;
        }
        if(open < n){
            current.push_back('(');
            fun(current,open+1,close,n);
            current.pop_back();
        }
        if(close < open){
            current.push_back(')');
            fun(current,open,close+1,n);
            current.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) {
        string current = "";
        fun(current,0,0,n);
        return ans;

    }
};
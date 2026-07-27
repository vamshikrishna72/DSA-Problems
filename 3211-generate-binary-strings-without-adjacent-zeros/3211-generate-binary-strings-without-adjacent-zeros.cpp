class Solution {
public:
    vector<string> ans;
    void solve(string current,int n){
        if(current.size() == n){
            ans.push_back(current);
            return;
        }
        if(current.empty() || current.back() == '1'){
            current.push_back('0');
            solve(current,n);
            current.pop_back();
        }
        current.push_back('1');
        solve(current,n);
        current.pop_back();
    }
    vector<string> validStrings(int n) {
        string current = "";
        solve(current,n);
        return ans;
    }
};
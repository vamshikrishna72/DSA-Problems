class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        string ans = "";
        unordered_map<char,int> freq;
        for(char c : s) freq[c]++;
        vector<pair<char,int>> v(freq.begin(),freq.end());
        sort(v.begin(),v.end(),[](auto &a, auto &b)
        {
            return a.second > b.second;
        });
        for(auto &p : v){
            ans.append(p.second,p.first);

        }
        return ans;

    }
};
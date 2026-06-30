class Solution {
public:
    using ll=long long;
    vector<vector<ll>> splitPainting(vector<vector<int>>& s) {
        
        int n=s.size();

        vector<vector<ll>>ans;
        map<ll,ll>mp;

        for(int i=0;i<n;i++){

            ll start=s[i][0];
            ll end=s[i][1];
            ll color=s[i][2];

            mp[start]+=color;
            mp[end]-=color;

        }


        auto ele= mp.begin(); 
        ll start=(*ele).first;
        ll sum=(*ele).second;

        mp.erase(ele);

        for(auto ele:mp){
            ll end=ele.first;
            if(sum>0) ans.push_back({start,end,sum});
            start=end;
            sum+=ele.second;
        }

        return ans;

    }
};
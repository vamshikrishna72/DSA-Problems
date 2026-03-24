class Solution {
public:
    bool isPalindrome(int x) {
        // int last_dig = x % 10;
        if(x < 0 || x % 10 == 0 && x != 0) return 0;
        int original = x;
        long long res=0;
        while(x!=0){
            int last_dig = x % 10;
            x = x /10;
            res = res*10+last_dig;
        }
        if(res == original) return true;
        return false;
    }
};
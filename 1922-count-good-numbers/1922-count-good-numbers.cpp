class Solution {
private:
    long long power(long long base,long long exp){
        long long ans=1;
        long long MOD = 1000000007;
        base = base % MOD;
        while(exp > 0){
            if(exp & 1){
                ans = (ans * base) % MOD;   
            }
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return ans;
    }
public:
    
    int countGoodNumbers(long long n) {
        long long MOD = 1000000007;
        long long even_positions = (n+1)/2;
        long long odd_positions = n / 2;
        return (power(5,even_positions)*power(4,odd_positions)) % MOD;
    }
};
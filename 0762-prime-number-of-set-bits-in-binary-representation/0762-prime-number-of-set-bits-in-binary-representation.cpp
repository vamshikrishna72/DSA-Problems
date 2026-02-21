class Solution {
private: 
    int isprime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i=left;i<=right;i++){
            int check = __builtin_popcount(i);
            if(isprime(check)){
                count++;
            }
        }
        return count;
    }
};
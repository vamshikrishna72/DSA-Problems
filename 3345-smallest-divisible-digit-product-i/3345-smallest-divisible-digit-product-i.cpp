class Solution {
public:
    int smallestNumber(int n, int t) {
        int product=1;
        int temp_n = n;
        while(temp_n>0){
            int temp = temp_n%10;
            product = product * temp;
            temp_n=temp_n/10;
        }
        if(n==0) product = 0;
        if(product%t==0){
            return n;
        }
        else{
            n++;
            return smallestNumber(n,t);
        }
    }
};



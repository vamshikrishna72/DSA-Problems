// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int maxLen = 0;
//         int n = s.length();
        
//         for(int i=0;i<n;i++){
//             vector<int>mpp(26,0);
//             int maxf=0;
//             for(int j=i;j<n;j++){
//                 mpp[s[j] - 'A']++;
//                 maxf = max(maxf,mpp[s[j] - 'A']);
//                 int changes = (j-i+1)-maxf;
//                 if(changes <= k){
//                     maxLen = max(maxLen,j-i+1);
//                 }
//                 else break;
//             }

//         }
//         return maxLen;
//     }
// };


#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> mpp(26, 0); 
        int maxf = 0;          
        int maxLen = 0;
        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            
            mpp[s[right] - 'A']++;
           
            maxf = max(maxf, mpp[s[right] - 'A']);

           
            if ((right - left + 1) - maxf > k) {
        
                mpp[s[left] - 'A']--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};

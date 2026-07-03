// class Solution {
// public:
//     string reverseWords(string s) {
//         int i = 0, n = s.size();
//         string temp;
//         while (i < n) {
//             while (i < n && s[i] == ' ')
//                 i++;

//             while (i < n && s[i] != ' ') {
//                 temp += s[i];
//                 i++;
//             }

//             while (i < n && s[i] == ' ')
//                 i++;

//             if (i < n)
//                 temp += ' ';
//         }
//         reverse(temp.begin(),temp.end());
//         int start=0;
//         for(int i=0;i<=n;i++){
//             if(i == n || temp[i] == ' '){
//                 reverse(temp.begin()+start,temp.begin() + i);
                
//                 start = i+1;
//             }
//         }
//         return s;
//     }
// };

class Solution {
public:
    string reverseWords(string s) {
        string temp;
        int i = 0, n = s.size();

        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;

            while (i < n && s[i] != ' ') {
                temp += s[i];
                i++;
            }

            while (i < n && s[i] == ' ')
                i++;

            if (i < n)
                temp += ' ';
        }

        reverse(temp.begin(), temp.end());

        n = temp.size();
        int start = 0;

        for (int i = 0; i <= n; i++) {
            if (i == n || temp[i] == ' ') {
                reverse(temp.begin() + start, temp.begin() + i);
                start = i + 1;
            }
        }

        return temp;
    }
};
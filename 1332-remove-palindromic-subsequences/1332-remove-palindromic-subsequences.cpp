class Solution {
public:
    int removePalindromeSub(string s) {
       if (s.empty()) 

       return 0;

        string ans = s;
        reverse(ans.begin(), ans.end());

        if (s == ans)
         return 1;

        return 2; 
    }
};
class Solution {
public:
    int minDeletion(string s, int k) {
       vector<int> freq(26, 0);
    for(int i = 0; i < s.size(); i++) {
       freq[s[i] - 'a']++;
   }
    sort(freq.begin(), freq.end());

     int count = 0;
        int distinct = 0;

for(int i = 0; i < freq.size(); i++) {
    if(freq[i] != 0) {
        distinct++;
    }
}
 for(int i = 0; i < 26 - k && distinct > k; i++) {
        count += freq[i];
    }

    return count;
    }
};
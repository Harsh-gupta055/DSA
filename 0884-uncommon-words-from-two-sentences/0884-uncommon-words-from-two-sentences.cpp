
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> v, ans;
        string word;

        stringstream ss1(s1);
        while (ss1 >> word) {
            v.push_back(word);
        }

        stringstream ss2(s2);
        while (ss2 >> word) {
            v.push_back(word);
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++) {
            if ((i == 0 || v[i] != v[i - 1]) &&
                (i == v.size() - 1 || v[i] != v[i + 1])) {
                ans.push_back(v[i]);
            }
        }

        return ans;
    }
};
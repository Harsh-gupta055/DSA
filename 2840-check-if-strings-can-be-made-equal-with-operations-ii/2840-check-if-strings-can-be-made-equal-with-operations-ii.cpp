class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<char> even1;
    vector<char> even2;
    vector<char> odd1;
    vector<char> odd2;

    if(s1.size() != s2.size()) {
        return false;
    }

    for(int i = 0; i < s1.size(); i++) {
        if(i % 2 == 0) {
            even1.push_back(s1[i]);
        }
        else {
            odd1.push_back(s1[i]);
        }
    }

    for(int i = 0; i < s2.size(); i++) {
        if(i % 2 == 0) {
            even2.push_back(s2[i]);
        }
        else {
            odd2.push_back(s2[i]);
        }
    }

    sort(even1.begin(), even1.end());
    sort(even2.begin(), even2.end());
    sort(odd1.begin(), odd1.end());
    sort(odd2.begin(), odd2.end());

    if(even1 == even2 && odd1 == odd2) {
        return true;
    }

    return false;
    }
};
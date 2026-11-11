class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
       long long sum = 0;
    int count = 0;
    vector<int> ans;

    sort(skill.begin(), skill.end());

    int k = skill[0] + skill[skill.size()-1];

    for(int i = 0; i < skill.size()/2; i++) {
        int j = skill.size()-1-i;

        if(skill[i] + skill[j] == k) {
            count++;
            ans.push_back(skill[i] * skill[j]);
        }
    }

    if(count == skill.size()/2) {
        for(int i = 0; i < ans.size(); i++) {
            sum += ans[i];
        }
        return sum;
    }
    else {
        return -1;
    }
    }
};
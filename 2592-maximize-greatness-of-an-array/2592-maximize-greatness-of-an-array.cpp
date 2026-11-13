class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
     int count = 0;
    vector<int> ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]);
    }
    int j = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(ans[i] > nums[j]) {
            count++;
            j++;
        }
    }

    return count;
    }
};
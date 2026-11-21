class Solution {
public:
    double minimumAverage(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<double> ans;
    int i = 0;
    int j = nums.size() - 1;
    while(i < j) {
        double result = (nums[i] + nums[j]) / 2.0;
        ans.push_back(result);
        i++;
        j--;
    }
    sort(ans.begin(), ans.end());
    return ans[0];
    }
};
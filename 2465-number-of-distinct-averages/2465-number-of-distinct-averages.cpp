class Solution {
public:
    int distinctAverages(vector<int>& nums) {
      vector<double> ans;

    sort(nums.begin(), nums.end());

    while(nums.size() > 0) {
        int m = nums.size() - 1;

        double result = (nums[0] + nums[m]) / 2.0;
        ans.push_back(result);

        nums.erase(nums.begin());
        nums.pop_back();
    }

    sort(ans.begin(), ans.end());

    int count = 0;

    for(int i = 0; i < ans.size(); i++) {
        if(i == 0 || ans[i] != ans[i-1]) {
            count++;
        }
    }
    return count;
    }
};
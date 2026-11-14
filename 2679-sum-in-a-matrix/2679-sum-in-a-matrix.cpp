class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
       vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
        sort(nums[i].begin(), nums[i].end());
        reverse(nums[i].begin(), nums[i].end());

    }
    int sum =0 ;
for(int i = 0; i < nums[0].size(); i++) {
    int maxi = 0;

    for(int j = 0; j < nums.size(); j++) {
        maxi = max(maxi, nums[j][i]);
    }

    ans.push_back(maxi);
    int sum = 0;
}
for(int i = 0; i < ans.size(); i++) {
    sum += ans[i];
}

return sum;
    }
};
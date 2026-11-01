class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        for(int x = 1; x <= 1000; x++) {
            int count = 0;
            for(int i = 0; i < nums.size(); i++) {
                for(int j = 0; j < nums[i].size(); j++) {
                    if(nums[i][j] == x) {
                        count++;
                        break;
                    }
                }
            }
            if(count == nums.size())
                ans.push_back(x);
        }
        return ans; 
    }
};
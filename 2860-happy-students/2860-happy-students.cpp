class Solution {
public:
    int countWays(vector<int>& nums) {
       sort(nums.begin(), nums.end());
    int count = 0;
    int n = nums.size();
    for(int i = 0; i <= n; i++) {
        if((i == 0 || nums[i-1] < i) &&
           (i == n || nums[i] > i)) {
            count++;
        }
    }
    return count;  
    }
};
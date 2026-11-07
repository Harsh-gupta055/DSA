class Solution {
public:
    int minimumOperations(vector<int>& nums) {
         int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                count++;
                int x = nums[i];

                for(int j = i; j < nums.size(); j++) {
                    if(nums[j] == x) {
                        nums[j] = 0;
                    }
                }
            }
        }
        return count;
    }
};
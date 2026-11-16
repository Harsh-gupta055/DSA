class Solution {
public:
    bool isGood(vector<int>& nums) {
       sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    int ex = nums[0];
    if(nums.size() != ex + 1 || nums[1] != nums[0]) {
        return false;
    }

    for(int i = 2; i < nums.size(); i++) {
        if(nums[i] != ex - (i - 1)) {
            return false;
        }
    }

    return true;

    }
};
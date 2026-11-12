class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
         sort(nums.begin(), nums.end());
    int count = 0;
    int i = 0;
    int j = (nums.size() + 1) / 2;
    while(i < nums.size()/2 && j < nums.size()) {
        if(nums[i] * 2 <= nums[j]) {
            count += 2;
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    return count;
    }
};
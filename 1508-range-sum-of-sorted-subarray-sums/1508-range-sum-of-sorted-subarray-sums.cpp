class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
         vector<int> result;

        for(int i = 0; i < n; i++) {
            int sum = 0;

            for(int j = i; j < n; j++) {
                sum += nums[j];
                result.push_back(sum);
            }
        }
          
        sort(result.begin(), result.end());

        long long ans = 0;

        for(int i = left - 1; i < right; i++) {
            ans += result[i];
        }

        return ans % 1000000007;
    }
};
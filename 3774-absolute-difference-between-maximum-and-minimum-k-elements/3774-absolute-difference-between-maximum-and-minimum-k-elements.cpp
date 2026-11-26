class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int sum =0 , summ =0 ;
        sort(nums.begin(),nums.end()) ;
        for(int i=0;i<k ;i++){
            sum+=nums[i] ;
        }
        reverse(nums.begin(),nums.end()) ;
        for(int i=0;i<k ;i++){
            summ+=nums[i] ;
        }
        return abs(summ - sum) ;
    }
};
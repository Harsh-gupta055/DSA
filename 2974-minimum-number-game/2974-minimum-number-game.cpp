class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans ;
         vector<int>raw ;
          vector<int>kid ;
        int n= nums.size() ;
        sort(nums.begin(),nums.end()) ;
        for(int i=0 ;i<nums.size();i=i+2){
          ans.push_back(nums[i]) ;
          raw.push_back(nums[i+1]) ;
        }
       for(int i=0;i<ans.size();i++){
            kid.push_back(raw[i]) ;
           kid.push_back(ans[i]) ;
       }
       return kid ;
    }
};
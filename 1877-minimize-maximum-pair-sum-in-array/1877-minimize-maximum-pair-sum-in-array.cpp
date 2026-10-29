class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        vector<int>work ;
         vector<int>don ;
         int n=nums.size() ;
         for(int i=0;i<n/2 ;i++){
            work.push_back(nums[i]) ;
         }
          for(int i=n/2;i<n ;i++){
            don.push_back(nums[i]) ;
         }
         reverse(don.begin(),don.end()) ;
         vector<int>ans ;
         for (int i=0;i<n/2 ;i++){
            int ex= work[i]+don[i] ;
               ans.push_back(ex) ;
         }
         int maxi =ans[0];

               for(int i = 0; i < ans.size(); i++) {
               if(ans[i] > maxi) {
               maxi = ans[i];
            }
          }
          return maxi ;
    }

};
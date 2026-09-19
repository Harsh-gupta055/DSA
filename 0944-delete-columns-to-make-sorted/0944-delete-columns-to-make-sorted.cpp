class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
      int count=0 ;
      int numrow =strs.size() ;
      int numcol =strs[0].size() ;

      for(int col=0 ;col<numcol ;col++ ){
        for(int row=1 ;row<numrow ; row++){
            if(strs[row][col]< strs[row-1][col]){
                count++ ;
                break ;
            }
        }
      }
      return count ;  
    }
};
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
      int count=0 ;
      int numrow =strs.size() ;
      int numcol =strs[0].size() ;
      //loop through each column
      for(int col=0 ;col<numcol ;col++ ){
        //compare each character  with the one above it 
        for(int row=1 ;row<numrow ; row++){
            if(strs[row][col]< strs[row-1][col]){
                count++ ;
                break ;
                //move to next column once an out of order pair is found 
            }
        }
      }
      return count ;  
    }
};
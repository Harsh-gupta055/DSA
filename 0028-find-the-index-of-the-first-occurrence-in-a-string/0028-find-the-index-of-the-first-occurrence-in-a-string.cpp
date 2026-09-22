class Solution {
public:
    int strStr(string haystack, string needle) {
      int n= haystack.size() ;
      int m= needle.size() ;
      for(int i=0 ;i<=n-m ;i++){
        if(haystack.substr(i,m) == needle)
        return i ;
      }  
      return -1 ;
    }
}; 
// dry run  
/* haystack ="sadbutsad" needle ="sad"
  n=9 m=3 
  i=0 haystack(i,3)= sad  if matched ....yes 
  at i=0 haystack.substr(0,3)
  so return i =0 */
class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end()) ;
        int n = arr.size() ;
       int start =  n/20 ;
       int end = n-(n/20) ;
       long long sum =0 ;
       for(int i=start ;i<end ;++i){
        sum+=arr[i] ;
       }
       int length = end- start ;
      return (double)sum/length ;
    }
};
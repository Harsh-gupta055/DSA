class Solution {
public:
    double average(vector<int>& salary) {
        int count =0 ;
        int sum=0 ;
        sort(salary.begin(),salary.end()) ;
       for(int i=1;i<salary.size()-1;i++){
           sum+=salary[i] ;
           count++ ;
       } 
       double result =(double)sum/count ;
       return result ;
    }
};
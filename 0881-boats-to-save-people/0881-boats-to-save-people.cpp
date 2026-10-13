class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int sum=0 ;
        int count =0 ;
        sort(people.begin(),people.end()) ;
        int i=0 ,j=people.size()-1 ;
        while(i<=j){
            sum=people[i]+people[j] ;
            if(sum<=limit){
                i++ ;
            }
            j-- ;
            count++ ;
        }
        return count ;
    }
};
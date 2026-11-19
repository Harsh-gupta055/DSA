class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum =0,count =0 ;
      sort(capacity.begin(),capacity.end()) ;  
       reverse(capacity.begin(),capacity.end()) ;  
            for(int i=0;i<apple.size();i++){
                sum+=apple[i] ;
            }
            for(int i = 0; i < capacity.size(); i++) {
        sum -= capacity[i];
        count++;
        
        if(sum <= 0) {
            return count;
        }
    }

    return count;
    }
};
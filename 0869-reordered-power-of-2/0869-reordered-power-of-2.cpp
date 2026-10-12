class Solution {
public:
    bool reorderedPowerOf2(int n) {
       string s= to_string(n) ; // string s="46"
       sort(s.begin(),s.end()) ;
       // checking powers of 2power0 to 2power30
       for(int i=0;i<31;i++){ // i=0 1<<0 =t="1"
        string t=to_string(1<<i) ; //sorted t="1" compare "46" == "1"= false
        sort(t.begin(),t.end()) ;// then i=6 ....1<<6 = t=64
        if(s==t) return true ; // sorted t="46" compare "46"=="46" means true ;
       }
       return false ;
    }
};
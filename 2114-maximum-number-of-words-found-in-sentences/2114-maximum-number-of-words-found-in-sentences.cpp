class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int rope=-1 ;
        int count=0 ;
        for(int i=0 ;i<sentences.size() ;i++){
           string temp = sentences[i] ;
           count =0 ;
           for(int j=0 ;j<temp.size();j++){
            if(temp[j]==' '){
                count++ ;
            }
           }
           count++ ;
           if(count>rope){
            rope = count ;
           }

        }
        return rope ;
    }
};
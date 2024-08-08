class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>m1,m2;
        int count=0;

        for(auto& a:words1){
            ++m1[a];
        }
        for(auto& a:words2){
            ++m2[a];
        }

        for(auto& a: words1){
            if(m1[a]==1 && m2[a]==1){
                ++count;
            }
            
        }

        return count;
    }
};
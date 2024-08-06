class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>mp(128,0);
       
         int j=0,i=0,maxi=0;
         while(i<s.size()){
             mp[s[i]]++;
              
             
             while(mp[s[i]]>1){
                
                 mp[s[j]]--;
               j++;
             }

              
             maxi= max(maxi,i-j+1); i++;              
        }
        
        return maxi; 
    }
};
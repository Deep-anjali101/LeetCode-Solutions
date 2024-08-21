class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9') s1+=s[i];
            else  if(s[i]>='A' && s[i]<='Z') s1+= tolower(s[i]);
           
        }

   int n=s1.size(); bool flag=true;

        for(int i=0;i<n/2;i++){
            if(s1[i]!=s1[n-i-1]){
                flag=false;
            }
        }
        return flag;
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char>st;
        string str="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                st.push(s[i]);
                 while(!st.empty()){
                    str+=st.top();
                    st.pop();
            } 
            }     
            
           

            else if(s[i]==' ' && str.size()==0){
                continue;
            }
            

           

             else
                break;
            
            
        }

        return str.size();
    }
};
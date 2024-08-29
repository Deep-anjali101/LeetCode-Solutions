class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        
        int i=0,j=0;
      
       for(string x : commands){
            if(x=="DOWN"){
                i++;
            }
            else if(x=="UP"){
             i--;
            }
            else if(x=="RIGHT"){
                j++;
            }
            else if(x=="LEFT"){
                j--;
    
        }
       }
        
  return n * i + j;
        
    }
};
class Solution {
public:
    int minOperations(vector<string>& logs) {
      vector<string>final_vector;

      for(const string& a:logs){

        if(a=="../"){
            if(!final_vector.empty()){
                final_vector.pop_back();
            }
        }
            else if (a!="./"){
                final_vector.push_back(a);
            }
      }

      return final_vector.size();
        
      }
};
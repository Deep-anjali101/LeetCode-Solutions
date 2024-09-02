class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
         vector<vector<int>> arr;

          if (m * n != original.size()) return {};
        for(int i=0;i<m*n;){
            vector<int>temp;
           for(int j=0;j<n;j++){
            temp.push_back(original[i++]);
           }

           arr.push_back(temp);
        }
return arr;
        }

    
};
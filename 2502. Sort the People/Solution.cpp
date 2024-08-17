class Solution {
public:
    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> A;

        for (int i = 0; i < names.size(); i++) {
            A.push_back({ heights[i],names[i]});
        }
      

        sort(A.rbegin(), A.rend());

 vector<string> ans;
       for(auto i:A){
          ans.push_back(i.second);
       }

       return ans;
    }
};
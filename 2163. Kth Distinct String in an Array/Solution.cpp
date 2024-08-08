class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>m;

        for(auto &a:arr){
        ++m[a];
        }

        for(auto &a: arr){
            if(m[a]==1)--k;
            if(k==0) return a;
        }
        return "";
    }
};
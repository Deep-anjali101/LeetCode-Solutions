class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(const string& data : details){
            char tens= data[11];
            char ones=data[12];

            if(tens>'6'|| (tens=='6' && ones>'0')){
                count++;
            }
        }
        return count;
    }
};
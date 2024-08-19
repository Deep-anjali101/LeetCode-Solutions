class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX, max_pro=INT_MIN;
        for(int i=0;i<prices.size();i++){
          mini=min(mini,prices[i]);
          max_pro=max(max_pro, prices[i]-mini);
        }

        return max_pro;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 25 27 29 30 34 35 37 38

        // target sum 61
         vector<pair<int,int>>mp;
          for(int i=0;i<nums.size();i++)   
          {
            mp.push_back({nums[i],i});
          }

        sort(mp.begin(), mp.end());

        int i = 0, n=nums.size(), j=n-1;
        while(i<j){
     if(mp[i].first +mp[j].first ==target) return {mp[i].second,mp[j].second };
       if(mp[i].first +mp[j].first >target){
             j--;
       }
       else {
           i++;
       }
        }
       return { };
    }
};
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>v;
        int max_freq=INT_MIN;
        int count = 0;
         for(auto &num : nums){
            v[num]++;
        }

     for(auto &a : v){
            if(a.second > max_freq)
                max_freq = a.second; 
        }

      for(auto&a: v){
        if(a.second==max_freq)
        count+=max_freq;
      }
 return count;
    }
};
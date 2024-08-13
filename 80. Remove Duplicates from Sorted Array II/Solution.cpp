class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    map<int, int> mp;
    vector<int>v;

    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    
    }

    for( auto i: mp){
        if(i.second>1){
            for(int j=0;j<2;j++){
                    v.push_back(i.first);
                }
        }
        if(i.second==1){
                    v.push_back(i.first);
                }
    }

  nums=v;


return v.size();
    }
};
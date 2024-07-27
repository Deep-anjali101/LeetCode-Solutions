class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int>nums2(nums.size());
        for(int i=0;i<nums.size();i++){
            nums2[i]=(nums[i])*nums[i];
        }

        sort(nums2.begin(),nums2.end());;
        return nums2;
    }
};